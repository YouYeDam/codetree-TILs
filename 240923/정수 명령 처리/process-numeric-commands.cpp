#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int a;
            cin >> a;

            s.push(a);
        }
        else if (command == "pop") {
            cout << s.top() << endl;
            s.pop();
        }
        else if (command == "size") {
            cout << s.size() << endl;
        }
        else if (command == "empty") {
            cout << s.empty() << endl;
        }
        else {
            cout << s.top() << endl;
        }
    }
    return 0;
}