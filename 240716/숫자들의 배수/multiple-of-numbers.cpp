#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = n;

    int arr[1000];
    int five_cnt = 0;
    int i = 0;

    while (five_cnt < 2) {
        arr[i] = num;
        cout << arr[i] << " ";
        if (arr[i] % 5 == 0) {
            five_cnt++;
        }
        i++;
        num += n;

    }
    return 0;
}