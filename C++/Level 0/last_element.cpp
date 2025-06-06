#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list)
{
    vector<int> answer;
    int a, b; // a : last - last-1 b : last * 2
    int last = num_list.size() - 1;

    for (int i = 0; i < num_list.size(); i++)
    {
        answer.push_back(num_list[i]);
    }

    // 마지막 원소가 그 직전 원소보다 크다면
    if (answer[last] > answer[last - 1])
    {
        // 마지막 원소 - 그 직전 원소
        a = answer[last] - answer[last - 1];
        answer.push_back(a);
    }
    // 마지막 원소가 그 직전 원소보다 작다면
    else
    {
        // 마지막 원소 * 2
        b = answer[last] * 2;
        answer.push_back(b);
    }

    return answer;
}