#include <iostream>
#include <vector>
using namespace std;

int k, n;
vector<int> answer;

void Print() {
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
}

void Choose(int cur_num) {
    if (cur_num == n + 1) {
        Print();
        return;
    }
    int size = answer.size();
    for (int i = 1; i <= k; i++) {
        if (size >= 2 && answer[size - 1] == i && answer[size - 2] == i) {
            continue;
        }
        answer.push_back(i);
        Choose(cur_num + 1);
        answer.pop_back();
    }
}

int main() {
    cin >> k >> n;
    Choose(1);
    return 0;
}