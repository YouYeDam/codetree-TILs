#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int n = a.length();
    
    int cnt = 0;
    
    for (int i = 0; i < n - 3; i++) {
        if (a[i] == '(' && a[i+1] == '(') {
            for (int j = i + 2; j < n - 1; j++) {
                if (a[j] == ')' && a[j+1] == ')') {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}