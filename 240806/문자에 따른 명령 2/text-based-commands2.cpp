#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    int y = 0;
    int dir_num = 3;
    string command;
    cin >> command;

    int dx[4] = {1, 0, -1, 0}; // 동남서북
    int dy[4] = {0, -1, 0, 1};

    for (int i = 0; i < command.length(); i++) {
        if (command[i] == 'L') {
            dir_num = (dir_num + 3) % 4;
        }
        else if (command[i] == 'R') {
            dir_num = (dir_num + 1) % 4;
        }
        else {
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }
    cout << x << " " << y;
    return 0;
}