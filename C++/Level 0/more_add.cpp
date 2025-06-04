#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;

    string aTob = "";          // a + b 문자열
    string bToa = "";          // b + a 문자열
    string s_a = to_string(a); // a 문자열 치환
    string s_b = to_string(b); // b 문자열 치환

    aTob += s_a + s_b; // a + b 문자열 더하기
    bToa += s_b + s_a; // b + a 문자열 더하기

    int ab = stoi(aTob); // a + b를 정수형으로 변환
    int ba = stoi(bToa); // b + a를 정수형으로 변환

    // 만약 a + b가 더 크면
    if (ab >= ba)
    {
        answer = ab;
    }
    // b + a가 더 크다면
    else
    {
        answer = ba;
    }

    return answer;
}