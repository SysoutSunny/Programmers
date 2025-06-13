#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string number)
{
    int answer = 0;

    for (auto &c : number)
    {
        int a = c - '0'; // 문자를 숫자로 변환 - 48을 하는 것
        answer += a;
        answer %= 9;
    }

    return answer;
}