#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push_back") {
            int num;
            cin >> num;

            v.push_back(num);
        }
        else if (command == "pop_back") {
            v.pop_back();
        }
        else if (command == "size") {
            cout << v.size() << endl;
        }
        else {
            int num;
            cin >> num;

            cout << v[num - 1] << endl;
        }
    }
    return 0;
}