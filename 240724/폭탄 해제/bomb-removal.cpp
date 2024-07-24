#include <iostream>
#include <string>
using namespace std;

class BombDefusing {
    public:
        string code;
        char color;
        int second;

        BombDefusing(string code, char color, int second) {
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {
    string code;
    char color;
    int second;

    cin >> code >> color >> second;

    BombDefusing bombdefuse1(code, color, second);

    cout << "code : " << bombdefuse1.code << endl;
    cout << "color : " << bombdefuse1.color << endl;
    cout << "second : " << bombdefuse1.second;
    return 0;
}