#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int max_speed;
    int idx = 1;
    while (true) {
        int d_idx = idx * idx;
        if (x >= d_idx) {
            idx++;
        }
        else {
            idx--;
            max_speed = idx;
            break;
        }
    }
    int dis = 0;
    int time = 0;
    int sum = 0;
    for (int i = 1; i <= max_speed; i++) {
        dis += i;
        sum += i;
        time++;
    }

    int remain = x - dis;

    while (remain > 0) {
        if (remain >= sum) {
            dis += max_speed;
            remain -= max_speed;
        }
        else {
            sum -= max_speed;
            max_speed--;
            dis += max_speed;
            remain -= max_speed;
        }
        time++;
    }
    cout << time;



    return 0;
}