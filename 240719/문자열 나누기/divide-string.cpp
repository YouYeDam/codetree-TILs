#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[10];
    string res_str = "";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        res_str += arr[i];
    }
    
    int str_cnt = 1;

    for (int i = 0; i < res_str.length(); i++) {
        if (str_cnt != 6) {
            cout << res_str[i];
            str_cnt++;
        }
        else {
            cout << endl;
            str_cnt = 1;
            cout << res_str[i];
            str_cnt++;
        }

        if (str_cnt != 1 && i == res_str.length() - 1) {
            cout << endl;
        }
        
    }
    return 0;
}