#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d)
{
    int answer = 0;

    vector<int> v = {a, b, c, d}; // 정렬할 벡터
    sort(v.begin(), v.end());     // 오름차순 정렬

    // 1. 모두 숫자가 같은 경우
    if (v[0] == v[3])
    {
        answer = 1111 * v[0];
    }
    // 2. 세 개가 같고 하나가 다른 경우
    // 2번째와 3번째가 같은건 확정이고 1,4가 다른 경우를 찾으면 됨
    // 경우의 수가 2개임 v[0]이 세 개로 같냐 v[3]이 세 개로 같냐로 쪼개짐
    else if (v[1] == v[2] && (v[0] == v[1] || v[2] == v[3]))
    {
        // 1번째가 다른 경우면 1을 넣고 4가 다르면 4를 넣는 삼항연산자
        answer = pow(10 * v[1] + (v[0] != v[1] ? v[0] : v[3]), 2);
    }
    // 3. 주사위가 두 개씩 같은 값
    // 2랑 3이 다르고 1과 2랑 같은 경우랑 3과 4가 같은 경우를 찾으면 됨
    // 위처럼 하면 2 3 3 6에서 막힘 그래서 그냥 정렬 했으니까 반으로 쪼개서 왼쪽이 같거나 오른쪽이 같거나 이런 식으로
    else if (v[0] == v[1] && v[2] == v[3])
    {
        answer = (v[0] + v[3]) * abs(v[0] - v[3]);
    }
    // 4. 모두 다른 경우
    else if (v[0] != v[1] && v[1] != v[2] && v[2] != v[3])
    {
        answer = v[0];
    }
    // 5. 두 숫자는 같은데 나머지 두 숫자가 다른 경우
    // 그냥 같은 경우는 냅두고 다른 경우를 다 곱하기
    else if (v[0] == v[1])
    {
        answer = v[2] * v[3];
    }
    else if (v[1] == v[2])
    {
        answer = v[0] * v[3];
    }
    else if (v[2] == v[3])
    {
        answer = v[0] * v[1];
    }

    return answer;
}