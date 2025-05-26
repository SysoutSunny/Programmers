#include <string>
#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> arr)
{
    double answer = 0; // 정답
    double sum = 0;    // 총 합

    // 배열의 크기까지
    for (int i = 0; i < arr.size(); i++)
    {
        // 총 합 = arr의 값들 전부 더하기
        sum += arr[i];
        // 평균 = 총 합 / 배열 크기
        answer = sum / arr.size();
    }

    return answer;
}