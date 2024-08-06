#include <iostream>
using namespace std;

int main() {
    int n, k, p, t;
    cin >> n >> k >> p >> t;
    int infectee[101] = {};
    int infect_count[101] = {};
    int infect_time[251][2] = {};

    infectee[p] = 1;
    int total_time = 0;

    for (int i = 0; i < t; i++) {
        int time, infectee_num, infected_num;
        cin >> time >> infectee_num >> infected_num;

        if (time > total_time) {
            total_time = time;
        }

        infect_time[time][0] = infectee_num;
        infect_time[time][1] = infected_num;
    }    

    for (int i = 1; i <= total_time; i++) {
        int infectee_num = infect_time[i][0];
        int infected_num = infect_time[i][1];

        if (infectee[infectee_num] == 1) {
            if (infect_count[infectee_num] <= k) {
                infectee[infected_num] = 1;
                infect_count[infectee_num]++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << infectee[i];
    }
    return 0;
}