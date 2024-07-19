#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    int len = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        len += arr[i].length();
    }
    cout << len;
    return 0;
}