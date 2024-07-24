#include <iostream>
#include <string>
using namespace std;
class Agent {
    public:
        string CodeName;
        int Score;

        Agent(string CodeName = "", int Score = 0) {
            this->CodeName = CodeName;
            this->Score = Score;
        }
};

int main() {
    Agent Agents[5];
    int MinScore = 101;
    int MinNum = 6;

    for (int i = 0; i < 5; i++) {
        string CodeName;
        int Score;
        cin >> CodeName >> Score;
        Agents[i] = Agent(CodeName, Score);

        if (Agents[i].Score < MinScore) {
            MinScore = Agents[i].Score;
            MinNum = i;
        }
    }

    cout << Agents[MinNum].CodeName << " " << Agents[MinNum].Score;
    return 0;
}