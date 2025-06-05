#include <string>
#include <vector>

using namespace std;

// 아까 a + b와 b + a의 응용문제다
int solution(int a, int b)
{
    int answer = 0;

    string ab = to_string(a) + to_string(b); // a + b 문자열로 치환
    int aTob = stoi(ab);                     // 정수형으로 치환

    // 만약 a + b가 2 * a * b보다 큰 경우
    if (aTob > 2 * a * b)
    {
        // a + b가 됨
        answer = aTob;
    }
    // 같으면 a + b 리턴하라고 했음
    else if (aTob == 2 * a * b)
    {
        answer = aTob;
    }
    // 아니면 2 * a * b를 리턴
    else
    {
        answer = 2 * a * b;
    }

    return answer;
}