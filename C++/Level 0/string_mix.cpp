#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 간단하게 그냥 반복문에서 차례대로 넣으면 되는구나
// 좀 더 생각할껄

string solution(string str1, string str2)
{
    string answer = "";

    for (int i = 0; i < str1.size(); i++)
    {
        answer += str1[i];
        answer += str2[i];
    }

    cout << answer;

    return answer;
}