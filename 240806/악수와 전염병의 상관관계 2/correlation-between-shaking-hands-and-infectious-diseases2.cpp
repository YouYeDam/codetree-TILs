#include <iostream>
using namespace std;

int main() {
    int N, K, P, T;
    cin >> N >> K >> P >> T;
    int infectee[101] = {};
    int infect_count[101] = {};
    int infect_time[251][3] = {};

    infectee[P] = 1;
    int total_time = 0;

    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y;

        if (t > total_time) {
            total_time = t;
        }

        infect_time[t][0] = x; // 감염시킨자
        infect_time[t][1] = y; // 감염당한자
        infect_time[t][2] = 1; // 악수여부
    }    

    for (int i = 1; i <= total_time; i++) {
        int infectee_num = infect_time[i][0];
        int infected_num = infect_time[i][1];
        
        if (infect_time[i][2] != 1) { // 악수여부가 없으면 건너뛰기
            continue;
        }

        if (infectee[infectee_num] == 1) {
            if (infect_count[infectee_num] <= K) {
                infectee[infected_num] = 1;
                infect_count[infectee_num]++;
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << infectee[i];
    }
    return 0;
}