#include <iostream>
#include <algorithm>
using namespace std;

class Dot {
    public:
        int number, x_pos, y_pos;

        Dot(int number = 0, int x_pos = 0, int y_pos = 0) {
            this->number = number;
            this->x_pos = x_pos;
            this->y_pos = y_pos;
        }
};

bool cmp (Dot a, Dot b) {
    if (a.x_pos + a.y_pos == b.x_pos + b.y_pos) {
        return a.number < b.number;
    }
    return a.x_pos + a.y_pos < b.x_pos + b.y_pos;    
}

int main() {
    int n;
    cin >> n;
    Dot dotarray[1000];

    for (int i = 0; i < n; i++) {
        int x_pos, y_pos;
        cin >> x_pos >> y_pos;

        if (x_pos < 0) {
            x_pos *= -1;
        }
        if (y_pos < 0) {
            y_pos *= -1;
        }
        dotarray[i] = Dot(i + 1, x_pos, y_pos);
    }

    sort(dotarray, dotarray + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << dotarray[i].number << endl;
    }
    return 0;
}