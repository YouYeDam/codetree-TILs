#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[10];
    string new_str = "";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        new_str += arr[i];
    }
    cout << new_str;
    return 0;
}