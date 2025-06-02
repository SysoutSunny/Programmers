#include <string>
#include <vector>

// 최대공약수와 최소공배수를 구하는 문제
// 최대공약수 : 유클리드 호제법, a % b를 하여 나머지에 작은 값을 계속 나누는 것
// 최소공배수 : 두 자연수 곱하고 최대공약수를 나누는 것
using namespace std;

// 최대 공약수 구하는 유클리드 호제법
int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }

    return gcd(b, a % b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
    vector<int> answer;

    // 분자 : 일단 최소공배수를 구하기
    int boonja = numer1 * denom2 + numer2 * denom1;
    // 분모 : 최소공배수 구하기
    int boonmo = denom1 * denom2;
    // 최대공약수는 분수를 기약분수로 만들기 위해서
    int gcd_value = gcd(boonja, boonmo);

    answer.push_back(boonja / gcd_value);
    answer.push_back(boonmo / gcd_value);

    return answer;
}