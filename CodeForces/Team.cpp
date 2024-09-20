#include <bits/stdc++.h>
using namespace std;

class Team
{
private:
    int n;
    vector<vector<int>> problems;

public:
    Team() {}
    void readInput();
    int countSolvedProblems();
    void printOutput(int);
};

void Team::readInput()
{
    cin >> n;
    problems.resize(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> problems[i][j];
        }
    }
}

int Team::countSolvedProblems()
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((problems[i][0] == 1 && problems[i][1] == 1) ||
            (problems[i][0] == 1 && problems[i][2] == 1) ||
            (problems[i][1] == 1 && problems[i][2] == 1))
        {
            count++;
        }
    }
    return count;
}

void Team::printOutput(int count)
{
    cout << count << endl;
}

int main()
{
    Team team;
    team.readInput();
    int count = team.countSolvedProblems();
    team.printOutput(count);
    return 0;
}