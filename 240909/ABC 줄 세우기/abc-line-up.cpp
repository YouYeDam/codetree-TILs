#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char arr[26];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        char alp = i + 65;
        int idx;

        for (int j = 0; j < n; j++) {
            if (alp == arr[j]) {
                idx = j;
                break;
            }
        }

        int temp_idx = idx;

        if (idx > i) {
            for (int j = 0; j < idx - i; j++) {
                char temp = arr[idx - 1];
                arr[idx - 1] = arr[idx];
                arr[idx] = temp;
                temp_idx--;
                cnt++;
            }
        }
        else if (idx < i) {
            for (int j = 0; j < i - idx; j++) {
                char temp = arr[idx + 1];
                arr[idx + 1] = arr[idx];
                arr[idx] = temp;
                temp_idx++;
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}