#include <string>
#include <vector>
#include <iostream>

// 문제를 겨우 이해했다... 인덱스를 나눈값이였음
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;

    for (const auto &query : queries)
    {
        // query는 행을 가리킴
        int s = query[0]; // 행의 0번째 원소
        int e = query[1]; // 행의 1번째 원소
        int k = query[2]; // 행의 2번째 원소

        for (int i = s; i <= e; i++)
        {
            // 인덱스 % k가 0이면
            if (i % k == 0)
            {
                // 배열에 1더하기
                arr[i] += 1;
            }
        }
    }

    answer = arr;
    return answer;
}