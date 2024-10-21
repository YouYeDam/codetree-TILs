#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Encoding(string a) {
    string str = "";

    int cnt = 0;
    char cur_char = a[0];

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == cur_char) {
            cnt++;
        }
        else {
            str += cur_char + to_string(cnt);
            cur_char = a[i];
            cnt = 1;
        }
        if (i == a.length() - 1) {
            str += cur_char + to_string(cnt);
        }
    }
    return str.length();
}

int main() {
    string a;
    cin >> a;
    
    
    int n = a.length();
    int min_len = Encoding(a);

    for (int i = 0; i < n - 1; i++) {
        int tmp = a[n - 1];

        for (int j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }
        a[0] = tmp;

        int len = Encoding(a);
        min_len = min(min_len, len);
    }

    cout << min_len;
    
    return 0;
}