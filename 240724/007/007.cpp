#include <iostream>
using namespace std;

class Mission {
    public:
        string code;
        char location;
        int time;

        Mission(string code, char location, int time) {
            this->code = code;
            this->location = location;
            this->time = time;
        }
};

int main() {
    string code;
    char location;
    int time;
    cin >> code >> location >> time;

    Mission mission1 = Mission(code, location, time);
    cout << "secret code : " << mission1.code << endl;
    cout << "meeting point : " << mission1.location << endl;
    cout << "time : " << mission1.time << endl;
    return 0;
}