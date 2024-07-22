#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        sum += num;
    }

    string str_sum = to_string(sum);
    cout << str_sum.substr(1, str_sum.length() - 1) + str_sum.substr(0, 1);
    return 0;
}