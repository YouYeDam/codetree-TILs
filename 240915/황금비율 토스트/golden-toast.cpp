#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    list<char> l;

    for (int i = 0; i < n; i++) {
        char alp;
        cin >> alp;
        l.push_back(alp);
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
            if (it == l.end()) {
                continue;
            }
            it = l.erase(it);
        }
        else if(command == 'P') {
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