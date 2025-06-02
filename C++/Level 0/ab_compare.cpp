#include <string>
#include <vector>

using namespace std;

// 그냥 숫자 같으면 1 아니면 -1 삼항연산자를 써도 됨
int solution(int num1, int num2)
{
    int answer = 0;

    if (num1 == num2)
    {
        answer = 1;
    }
    else
    {
        answer = -1;
    }

    return answer;
}