#include <string>
#include <vector>
using namespace std;

// 약수의 합
// 반복문에 i를 차례대로 나누고 나머지가 0이면 그 수를 다 더하는 접근
int solution(int n)
{
    int answer = 0;

    // n까지 합
    for (int i = 1; i <= n; i++)
    {
        // 만약 i를 나눴을 때 나머지가 0이면 약수라는 소리
        if (n % i == 0)
        {
            // 약수의 합
            answer += i;
        }
    }

    return answer;
}