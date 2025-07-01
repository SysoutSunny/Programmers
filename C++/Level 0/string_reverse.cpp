#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int s, int e)
{
    string answer = "";
    string temp = "";

    // 처음 문자열 복사
    for (int i = 0; i < s; i++)
    {
        answer += my_string[i];
    }

    // 중간 리버스 문자열
    for (int j = e; j >= s; j--)
    {
        answer += my_string[j];
    }

    // 마지막 문자열 복사
    for (int k = e + 1; k < my_string.size(); k++)
    {
        answer += my_string[k];
    }

    return answer;
}