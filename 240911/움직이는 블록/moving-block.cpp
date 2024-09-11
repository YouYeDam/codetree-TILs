#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10000];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int avg = sum / n;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            int mov = arr[i] - avg;
            int mov_cnt = mov;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < avg) {
                    if (mov == 0) {
                        break;
                    }
                    for (int k = 0; k < mov_cnt; k++) {
                        if (arr[j] == avg || mov == 0) {
                            break;
                        }
                        arr[j]++;
                        arr[i]--;
                        mov--;
                        cnt++;
                    }
                }
            }
        }
        else if (arr[i] < avg) {
            int mov = avg - arr[i];
            int mov_cnt = mov;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > avg) {
                    if (mov == 0) {
                        break;
                    }
                    for (int k = 0; k < mov_cnt; k++) {
                        if (arr[j] == avg || mov == 0) {
                            break;
                        }
                        arr[j]--;
                        arr[i]++;
                        mov--;
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}