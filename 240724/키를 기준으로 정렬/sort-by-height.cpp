#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Infromation {
    public:
        string name;
        int height;
        int weight;

        Infromation(string name = "", int height = 0, int weight = 0) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(Infromation a, Infromation b) {
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    Infromation InfromArray[10];

    for (int i = 0; i < n; i++) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;

        InfromArray[i] = Infromation(name, height, weight);
    }

    sort(InfromArray, InfromArray + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << InfromArray[i].name << " " << InfromArray[i].height << " " << InfromArray[i].weight << endl;
    }
    return 0;
}