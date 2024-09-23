#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int a;
            cin >> a;
            q.push(a);
        }
        else if (command == "pop") {
            cout << q.front() << endl;
            q.pop();
        }
        else if (command == "size") {
            cout << q.size() << endl;
        }
        else if (command == "empty") {
            cout << q.empty() << endl;
        }
        else {
            cout << q.front() << endl;
        }
    }
    return 0;
}