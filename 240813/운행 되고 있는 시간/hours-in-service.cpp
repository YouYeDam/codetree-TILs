#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int work[1001] = {};
    int person[100][2];

    for (int i = 0; i < n; i++) {
        cin >> person[i][0] >> person[i][1];
        for (int j = person[i][0]; j < person[i][1]; j++) {
            work[j]++;
        }
    }

    int max_time = INT_MIN;

    for (int i = 0; i < n; i++) {
        int new_work[1001];
        for (int j = 0; j < 1001; j++) {
            new_work[j] = work[j];
        }

        for (int j = person[i][0]; j < person[i][1]; j++) {
            new_work[j]--;
        }

        int time = 0;
        for (int j = 0; j < 1001; j++) {
            if (new_work[j] > 0) {
                time++;
            }
        }

        max_time = max(max_time, time);
    }
    cout << max_time;
    return 0;
}