#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;

    char arr_name[100];
    int arr_read[100];
    int arr_res[26] = {};

    for (int i = 0; i < m; i++) {
        char name;
        int read;
        cin >> name >> read;
        arr_name[i] = name;
        arr_read[i] = read;
    }

    if (arr_read[p-1] == 0) { // 모두 읽었으면 읽음 확정
        for (int i = 0; i < n; i++) {
            arr_res[i] = 1;
        }
    }

    for (int i = p - 1; i < m; i++) { // 이후에 채팅한 사람은 읽음 확정
        int alp = arr_name[i] - 65;
        arr_res[alp] = 1;
    }

    for (int i = p - 2; i >= 0; i--) { // 이전 채팅 중 읽은 사람이 동일하면 채팅한 사람은 읽음 확정
        if (arr_read[p-1] == arr_read[i]) {
            int alp = arr_name[i] - 65;
            arr_res[alp] = 1;
        }
        else {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr_res[i] != 1) {
            char alp = i + 65;
            cout << alp << " ";
        }
    }
    return 0;
}