#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 굳이 배열 안 만들고 걍 바로 더해도 되네
int solution(int a, int d, vector<bool> included)
{

    vector<int> v; // 등차수열 배열
    int answer = 0;

    // 등차수열 배열 만들기
    for (int i = 0; i < included.size(); i++)
    {
        v.push_back(a + i * d);
    }

    for (int i = 0; i < included.size(); i++)
    {
        // 값이 true 라면
        if (included[i] == true)
        {
            answer += v[i];
        }
    }

    return answer;
}