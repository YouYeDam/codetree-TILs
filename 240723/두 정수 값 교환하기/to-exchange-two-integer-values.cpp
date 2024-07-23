#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int n, m;
    cin >> n >> m;

    swap(&n, &m);
    cout << n << " " << m;
    return 0;
}