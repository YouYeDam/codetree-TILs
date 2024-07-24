#include <iostream>
#include <string>
using namespace std;

class NextLevel {
    public:
        string id;
        int lv;

        NextLevel(string id = "codetree", int lv = 10) {
            this->id = id;
            this->lv = lv;
        }
};

int main() {
    string id;
    int lv;
    cin >> id >> lv;

    NextLevel User1 = NextLevel();
    cout << "user " << User1.id << " lv " << User1.lv;
    
    cout << endl;

    NextLevel User2 = NextLevel(id, lv);
    cout << "user " << User2.id << " lv " << User2.lv;
    return 0;
}