#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char c;
    cin >> c;
    bool IsFind = false;
    for (int i = 0; i < 6; i++) {
        if (arr[i] == c) {
            cout << i;
            IsFind = true;
            break;
        }
    }

    if (!IsFind) {
        cout << "None";
    }
    return 0;
}