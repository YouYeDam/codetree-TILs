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

        infect_time[t][0] = x;
        infect_time[t][1] = y;
        infect_time[t][2] = 1; // 악수여부
    }    

    for (int i = 1; i <= total_time; i++) {
        int x_num = infect_time[i][0];
        int y_num = infect_time[i][1];
        
        if (infect_time[i][2] != 1) { // 악수여부가 없으면 건너뛰기
            continue;
        }

        if (infectee[x_num] == 1) { //x가 감염자 
            if (infect_count[x_num] < K) { //x의 악수 k번 미만
                infect_count[x_num]++;
                if (infectee[y_num] == 1) { //y도 감염자
                    infect_count[y_num]++;
                }
                else {
                    infectee[y_num] = 1;
                }
            }
            else { //악수 k번 이상
                infect_count[x_num]++;
                if (infectee[y_num] == 1) { //y도 감염자
                    infect_count[y_num]++;
                }
            }
        }

        else if (infectee[y_num] == 1) { //y가 감염자 
            if (infect_count[y_num] < K) { //y의 악수 k번 미만
                infect_count[y_num]++;
                if (infectee[x_num] == 1) { //x도 감염자
                    infect_count[x_num]++;
                }
                else {
                    infectee[x_num] = 1;
                }
            }
            else { //악수 k번 이상
                infect_count[y_num]++;
                if (infectee[x_num] == 1) { //x도 감염자
                    infect_count[x_num]++;
                }
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << infectee[i];
    }
    return 0;
}