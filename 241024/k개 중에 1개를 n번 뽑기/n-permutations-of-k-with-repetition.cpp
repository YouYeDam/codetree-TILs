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

    for (int i = 1; i <= k; i++) {
        answer.push_back(i);
        Choose(cur_num + 1);
        answer.pop_back();
    }

    return;

}

int main() {
    cin >> k >> n;
    Choose(1);
    return 0;
}