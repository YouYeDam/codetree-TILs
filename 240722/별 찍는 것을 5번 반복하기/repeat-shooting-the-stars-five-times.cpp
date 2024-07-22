#include <iostream>
using namespace std;


void PrintStars() {
    for (int i = 0; i < 10; i++) {
        cout << '*';
    }
    cout << endl;
    return;
}


int main() {
    for (int i = 0; i < 5; i++) {
        PrintStars();
    }
    return 0;
}