#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int> lst;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push_front") {
            int num;
            cin >> num;

            lst.push_front(num);
        } else if (command == "push_back") {
            int num;
            cin >> num;

            lst.push_back(num);
        } else if (command == "pop_front") {
            cout << lst.front() << endl;
            lst.pop_front();
        } else if (command == "pop_back") {
            cout << lst.back() << endl;
            lst.pop_back();
        } else if (command == "size") {
            cout << lst.size() << endl;
        } else if (command == "empty") {
            cout << lst.empty() << endl;
        } else if (command == "front") {
            cout << lst.front() << endl;
        } else if (command == "back") {
            cout << lst.back() << endl;
        }
    }

    return 0;
}