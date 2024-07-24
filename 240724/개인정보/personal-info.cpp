#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student {
    public:
        string name;
        int height;
        float weight;

        Student(string name = "", int height = 0, float weight = 0) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp_name(Student a, Student b) {
    return a.name < b.name;
}

bool cmp_height(Student a, Student b) {
    return a.height > b.height;
}

int main() {
    Student students[5];
    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 5; i++) {
        string name;
        int height;
        float weight;

        cin >> name >> height >> weight;

        students[i] = Student(name, height, weight);
    }

    sort(students, students + 5, cmp_name);
    cout << "name" << endl;
    for (int i = 0; i < 5; i++) {
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }

    cout << endl;

    sort(students, students + 5, cmp_height);
    cout << "height" << endl;
    for (int i = 0; i < 5; i++) {
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }

    return 0;
}