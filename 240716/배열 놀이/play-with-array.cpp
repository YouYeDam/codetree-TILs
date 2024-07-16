#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[101] = {};

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        int quest_num;
        cin >> quest_num;

        if (quest_num == 1) {
            int a;
            cin >> a;
            cout << arr[a] << endl;
        }
        else if (quest_num == 2) {
            int b;
            cin >> b;
            bool IsFind = false;
            for (int j = 1; j <= n; j++) {
                if (arr[j] == b) {
                    cout << j << endl;
                    IsFind = true;
                    break;
                }
            }
            if (!IsFind) {
                cout << 0 << endl;
            }
        }
        else {
            int s, e;
            cin >> s >> e;
            for (int j = s; j <= e; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}