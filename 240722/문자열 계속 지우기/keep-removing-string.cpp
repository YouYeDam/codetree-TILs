#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;


    while (true) {
        bool IsExist = false;

        for (int i = 0; i < a.length(); i++) {
            if (a[i] == b[0]) {
                bool IsSame = true;

                for (int j = 0; j < b.length(); j++) {
                    if (a[i+j] != b[j]) {
                        IsSame = false;
                        break;
                    }
                }

                if (IsSame) {
                    IsExist = true;
                    a.erase(i, b.length());
                    break;
                }
            }
        }

        if (!IsExist) {
            break;
        }
    }

    cout << a;
    return 0;
}