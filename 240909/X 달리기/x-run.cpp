#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;
    int min_time = INT_MAX;

    for (int i = 1; i <= x; i++) {
        int speed = 1;
        int dis = 0;
        int time = 0;
        bool SpeedUp = true;

        while (dis < x) {
            dis += speed;
            time++;

            if (speed == i) {
                SpeedUp = false;
            }

            if (SpeedUp) {
                speed++;
            }
            else {
                speed--;
                if (speed < 1) {
                    speed = 1;
                }
            }
        }
        if (speed == 1) {
            min_time = min(min_time, time);
        }
    }
    cout << min_time;
    return 0;
}