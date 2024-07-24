#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        int number, height, weight;

        Student(int number = 0, int height = 0, int weight = 0) {
            this->number = number;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp (Student a, Student b) {
    if (a.height == b.height) {
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    Student students[1000];

    for (int i = 0; i < n; i++) {
        int height, weight;
        cin >> height >> weight;

        students[i] = Student(i + 1, height, weight);
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].height << " " << students[i].weight << " " << students[i].number << endl;
    }
    return 0;
}