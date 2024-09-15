#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    int n, m;
    string str;
    cin >> n >> m >> str;
    list<char> l;

    for (int i = 0; i < n; i++) {
        l.push_back(str[i]);
    }
    list<char>::iterator it = l.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (it == l.begin()) {
                continue;
            }
            it--;
        }
        else if (command == 'R') {
            if (it == l.end()) {
                continue;
            }
            it++;
        }
        else if (command == 'D') {
            l.erase(it);
        }
        else {
            char s;
            cin >> s;
            l.insert(it, s);
        }
    }

        for(it = l.begin(); it != l.end(); it++) {
            cout << *it;
        } 
    return 0;
}