#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int arr[6];
    int sum = 0;

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int min_val = INT_MAX;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 6; k++) {
                int team_a = arr[i] + arr[j] + arr[k];
                int team_b = sum - team_a;
                int val = abs(team_a - team_b);

                if (val < min_val) {
                    min_val = val;
                }
            }
        }
    }
    cout << min_val;
    return 0;
}