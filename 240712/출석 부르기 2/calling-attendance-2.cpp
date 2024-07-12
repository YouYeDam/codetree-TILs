#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "John" << endl;
        }
        else if (n == 2) {
            cout << "Tom" << endl;
        }
        else if (n == 3) {
            cout << "Paul" << endl;
        }
        else if (n == 4) {
            cout << "Sam" << endl;
        }
        else {
            cout << "Vacancy";
            break;
        }
    }
    return 0;
}