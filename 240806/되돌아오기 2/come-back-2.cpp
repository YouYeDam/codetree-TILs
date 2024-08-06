#include <iostream>
#include <string>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    string command;
    cin >> command;
    int x = 0, y = 0;
    int dir = 3;
    int time = 0;
    bool IsReturn = false;

    for (int i = 0; i < command.length(); i++) {
        if (command[i] == 'L') {
            dir = (dir + 3) % 4;
        }
        else if (command[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else {
            x += dx[dir];
            y += dy[dir];
        }
        time++;

        if (x == 0 && y == 0) {
            IsReturn = true;
            cout << time;
            break;
        }
    }    
    if (!IsReturn) {
        cout << -1;
    }
    return 0;
}