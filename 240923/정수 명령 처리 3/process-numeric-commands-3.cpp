#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> d;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push_front") {
            int a;
            cin >> a;

            d.push_front(a);
        }
        else if (command == "push_back") {
            int a;
            cin >> a;

            d.push_back(a);
        }
        else if (command == "pop_front") {
            cout << d.front() << endl;
            d.pop_front();
        }
        else if (command == "pop_back") {
            cout << d.back() << endl;
            d.pop_back();
        }
        else if (command == "size") {
            cout << d.size() << endl;
        }
        else if (command == "empty") {
            cout << d.empty() << endl;
        }
        else if (command == "front") {
            cout << d.front() << endl;
        }
        else if (command == "back") {
            cout << d.back() << endl;
        }
    }
    return 0;
}