#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> answer;
bool num_arr[9] = {};

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

    for (int i = 1; i <= n; i++) {
        if (num_arr[i] == false) {
            answer.push_back(i);
            num_arr[i] = true;
            
            Choose(cur_num + 1);

            answer.pop_back();
            num_arr[i] = false;
        }
    }
}

int main() {
    cin >> n;
    Choose(1);
    return 0;
}