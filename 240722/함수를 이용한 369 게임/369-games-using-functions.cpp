#include <iostream>
#include <string>
using namespace std;

int Count369(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) {
            cnt++;
        }
        else {
            string str_i = to_string(i);
            for (int j = 0; j < str_i.length(); j++) {
                if (str_i[j] == '3' || str_i[j] == '6' || str_i[j] == '9') {
                    cnt++;
                    break;
                }
            }
        }
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = Count369(a, b);
    cout << cnt;
    return 0;
}