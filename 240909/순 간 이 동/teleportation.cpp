#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int min_dis = abs(a - b);

    int dis1 = abs(a - x) + abs(y - b);
    min_dis = min(min_dis, dis1);

    int dis2 = abs(a - y) + abs(x - b);
    min_dis = min(min_dis, dis2);

    cout << min_dis;
    return 0;
}