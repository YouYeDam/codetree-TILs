#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int obj_time = c*60 + d;
    int cur_time = a*60 + b;

    cout << obj_time - cur_time;
    return 0;
}