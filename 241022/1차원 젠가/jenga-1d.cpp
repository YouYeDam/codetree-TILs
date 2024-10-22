#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int s1, e1, s2, e2;
    cin >> s1 >> e1 >> s2 >> e2;
    s1--; e1--; s2--; e2--;
    
    int tmp_arr1[100] = {};
    int tmp_idx1 = 0;

    for (int i = 0; i < n; i++) {
        if (i >= s1 && i <= e1) {
            continue;
        }
        tmp_arr1[tmp_idx1] = arr[i];
        tmp_idx1++;
    }

    for (int i = 0; i < tmp_idx1; i++) {
        arr[i] = tmp_arr1[i];
    }

    int tmp_arr2[100] = {};
    int tmp_idx2 = 0;

    for (int i = 0; i < tmp_idx1; i++) {
        if (i >= s2 && i <= e2) {
            continue;
        }
        tmp_arr2[tmp_idx2] = arr[i];
        tmp_idx2++;
    }    

    for (int i = 0; i < tmp_idx2; i++) {
        arr[i] = tmp_arr2[i];
    }

    cout << tmp_idx2 << endl;

    for (int i = 0; i < tmp_idx2; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}