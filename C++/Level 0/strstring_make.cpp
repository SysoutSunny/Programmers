#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts)
{
    string answer = "";

    // Ž��
    for (int i = 0; i < my_strings.size(); i++)
    {
        for (int j = parts[i][0]; j <= parts[i][1]; j++)
        {
            answer += my_strings[i][j];
        }
    }

    return answer;
}