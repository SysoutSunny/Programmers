#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string number)
{
    int answer = 0;

    for (auto &c : number)
    {
        int a = c - '0'; // ���ڸ� ���ڷ� ��ȯ - 48�� �ϴ� ��
        answer += a;
        answer %= 9;
    }

    return answer;
}