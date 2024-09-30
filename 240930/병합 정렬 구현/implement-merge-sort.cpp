#include <iostream>
using namespace std;

int n;
int arr[100000];

void Merge(int low, int mid, int high) {
    int merge_arr[100000];
    int i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            merge_arr[k] = arr[i];
            i++;
            k++;
        }
        else {
            merge_arr[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid) {
        merge_arr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high) {
        merge_arr[k] = arr[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = merge_arr[i];
    }
}

void MergeSort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(low, mid);
        MergeSort(mid + 1, high);
        Merge(low, mid, high);
    }
}

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    MergeSort(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}