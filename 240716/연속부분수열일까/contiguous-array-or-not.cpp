#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1, n2;

    int arr1[100];
    int arr2[100];

    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    bool IsExist = false;

    for (int i = 0; i <= n1 - n2; i++) {
        if (arr1[i] ==  arr2[0]) {
            bool IsSeq = true;
            for (int j = 1; j < n2; j++) {
                if (arr1[i+j] != arr2[j]) {
                    IsSeq = false;
                    break;
                }
            }
            if (IsSeq) {
                IsExist = true;
                break;
            }
        }
    }

    if (IsExist) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}