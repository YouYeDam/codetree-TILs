#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    bool Isintersecting = false;
    
    if (x1 >= x3) {
        if (x4 >= x1) {
            Isintersecting = true;
        }
    }
    else if (x3 >= x1) {
        if (x2 >= x3) {
            Isintersecting = true;
        }
    }
    if (Isintersecting) {
        cout << "intersecting";
    }
    else {
        cout << "nonintersecting";
    }
    return 0;
}