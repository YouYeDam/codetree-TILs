#include <iostream>
#include <string>
using namespace std;

class Product {
    public:
        string name;
        int code;

        Product(string name = "", int code = 0) {
            this->name = name;
            this->code = code;
        }
};

int main() {
    string name;
    int code;

    cin >> name >> code;

    Product product1;
    product1.name = "codetree";
    product1.code = 50;

    Product product2;
    product2.name = name;
    product2.code = code;

    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name;
    return 0;
}