#include <iostream>
using namespace std;

int n;
int arr[100];

void SelectionSort() {
    int len = n;

    for (int i = 0; i < len - 1; i++) {
        int min = i;
        for (int j = i+1; j < len; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    

    SelectionSort();

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}