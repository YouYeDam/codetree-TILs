#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    char c;
    cin >> c;
    
    bool IsExist = false;

    for (int i = 0; i < 10; i++) {
        int len = arr[i].length();
        if (arr[i][len-1] == c) {
            cout << arr[i] << endl;
            IsExist = true;
        }
    }
    if (IsExist == false) {
        cout << "None";
    }
    return 0;
}