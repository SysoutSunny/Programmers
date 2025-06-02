#include <string>
#include <iostream>
#include <vector>

using namespace std;

// int형은 나누면 실수형이 버려지고 정수형만 남기 때문에
// 형변환 문제
int solution(int num1, int num2)
{
    int answer = 0;

    answer = (double)num1 / (double)num2 * 1000;

    return answer;
}