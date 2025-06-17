#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string, string is_suffix)
{
    int answer = 0;
    vector<string> temp;

    for (int i = 0; i < my_string.size(); i++)
    {
        temp.push_back(my_string.substr(i)); // 접미사 배열 만들기
    }

    // 전체 순회
    for (auto &a : temp)
    {
        if (a == is_suffix)
        {
            answer = 1;
        }
    }

    return answer;
}