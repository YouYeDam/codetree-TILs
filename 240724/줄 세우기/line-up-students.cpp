#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        int height, weight, number;

        Student(int height = 0, int weight = 0, int number = 0) {
            this->height = height;
            this->weight = weight;
            this->number = number;
        }
};

bool cmp (Student a, Student b) {
    if (a.height == b.height) {
        if (a.weight == b.weight) {
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main() {
    int n;
    cin >> n;

    Student students[1000];

    for (int i = 0; i < n; i++) {
        int height, weight;
        cin >> height >> weight;

        students[i] = Student(height, weight, i + 1);
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].height << " " << students[i].weight << " " << students[i].number << endl;
    }

    return 0;
}