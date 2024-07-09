#include <iostream>
using namespace std;

int main() {
    float Sight;
    cin >> Sight;
    if (Sight >= 1.0) {
        cout << "High";
    }
    else if (Sight >= 0.5) {
        cout << "Middle";
    }
    else {
        cout << "Low";
    }
    return 0;
}