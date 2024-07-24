#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student {
    public:
        string name;
        int height;
        int weight;

        Student(string name = "", int height = 0, int weight = 0) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(Student a, Student b) {
    if (a.height == b.height) {
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    Student students[10];

    for (int i = 0; i < n; i++) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;

        students[i] = Student(name, height, weight);
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }
    return 0;
}