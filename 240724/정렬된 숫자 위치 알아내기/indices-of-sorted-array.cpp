#include <iostream>
#include <algorithm>
using namespace std;

class NumberInfo {
    public:
        int number;
        int origin_pos;
        int new_pos;
        NumberInfo(int number = 0, int origin_pos = 0, int new_pos = 0) {
            this->number = number;
            this->origin_pos = origin_pos;
            this->new_pos = new_pos;
        }
};

bool cmp1(NumberInfo a, NumberInfo b) {
    if (a.number == b.number) {
        return a.origin_pos < b.origin_pos;
    }
    return a.number < b.number;
}

bool cmp2(NumberInfo a, NumberInfo b) {
    return a.origin_pos < b.origin_pos;
}

int main() {
    int n;
    cin >> n;

    NumberInfo numberinfos[1000];

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numberinfos[i] = NumberInfo(number, i + 1, 0);
    }

    sort(numberinfos, numberinfos + n, cmp1);

    for (int i = 0; i < n; i++) {
        numberinfos[i].new_pos = i + 1;
    }

    sort(numberinfos, numberinfos + n, cmp2);

    for (int i = 0; i < n; i++) {
        cout << numberinfos[i].new_pos << " ";
    }
    return 0;
}