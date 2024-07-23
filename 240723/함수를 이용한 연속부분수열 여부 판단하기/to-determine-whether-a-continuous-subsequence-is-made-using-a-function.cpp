#include <iostream>
using namespace std;

void CheckCondition(int n1, int n2) {
    int arr1[100];
    int arr2[100];

    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    bool IsExist = false;
    for (int i = 0; i < n1; i++) {
        if (arr1[i] == arr2[0]) {
            bool IsSequence = true;
            for (int j = 0; j < n2; j++) {
                if (arr1[i+j] != arr2[j]) {
                    IsSequence = false;
                    break;
                }
            }
            if (IsSequence) {
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
}
int main() {
    int n1, n2;
    cin >> n1 >> n2;

    CheckCondition(n1, n2);
    return 0;
}