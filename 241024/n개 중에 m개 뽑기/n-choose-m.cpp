#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> answer;

void Print() {
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
}

void Choose(int cur_num, int last_num) {
    if (cur_num == m) {
        Print();
        return;
    }

    for (int i = last_num + 1; i <= n; i++) {
        answer.push_back(i);
        Choose(cur_num + 1, i);
        answer.pop_back();
    }
}

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        answer.push_back(i);
        Choose(1, i);
        answer.pop_back();
    }
    
    return 0;
}