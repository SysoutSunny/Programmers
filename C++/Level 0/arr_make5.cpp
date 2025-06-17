#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l)
{
    vector<int> answer;

    for (int i = 0; i < intStrs.size(); i++)
    {
        string temp = intStrs[i].substr(s, l); // s부터 l까지 문자열 자르기
        int num = stoi(temp);                  // 문자열 정수로 변환

        if (num > k)
        {
            answer.push_back(num);
        }
    }

    return answer;
}