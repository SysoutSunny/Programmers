#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;

    // 홀수라면
    if (n % 2 != 0)
    {
        // n 이하의 홀수인 모든 양의 정수 합
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                // 홀수인 i를 더하기
                answer += i;
            }
        }
    }

    // 짝수라면
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                // 짝수인 i를 제곱해서 더하기
                answer += i * i;
            }
        }
    }

    return answer;
}