#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    string str_sum = to_string(sum);
    int cnt = 0;

    for (int i = 0; i < str_sum.length(); i++) {
        if (str_sum[i] == '1') {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}