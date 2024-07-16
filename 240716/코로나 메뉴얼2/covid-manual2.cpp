#include <iostream>
using namespace std;

int main() {
    int arr[4] = {};

    for (int i = 0; i < 3; i++) {
        char sym;
        int temp;
        cin >> sym >> temp;

        if (sym == 'Y' && temp >= 37) {
            arr[0]++;
        }
        else if (sym == 'N' && temp >= 37) {
            arr[1]++;
        }
        else if (sym == 'Y' && temp < 37) {
            arr[2]++;
        }
        else {
            arr[3]++;
        }

    }

    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    if (arr[0] >= 2) {
        cout << "E";
    }
    return 0;
}