#include <iostream>
#include <string>
using namespace std;

class IDInformation {
    public:
        string name;
        string address;
        string region;

        IDInformation(string name = "", string address = "", string region = "") {
            this->name = name;
            this->address = address;
            this->region = region;
        }
};
int main() {
    IDInformation InformArray[10];
    int n;
    cin >> n;

    string max_name = "a";
    int max_num = -1;

    for (int i = 0; i < n; i++) {
        string name, address, region;
        cin >> name >> address >> region;

        InformArray[i] = IDInformation(name, address, region);

        if (InformArray[i].name > max_name) {
            max_name = InformArray[i].name;
            max_num = i;
        }
    }

    cout << "name " << InformArray[max_num].name << endl;
    cout << "addr " << InformArray[max_num].address << endl;
    cout << "city " << InformArray[max_num].region;
    return 0;
}