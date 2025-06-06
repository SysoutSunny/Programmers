#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    int mul = 1;
    int add = 0;

    // 모든 원소들의 곱
    for (int i = 0; i < num_list.size(); i++)
    {
        mul *= num_list[i];
    }
    // 모든 원소들의 합을 일단 구함
    for (int i = 0; i < num_list.size(); i++)
    {
        add += num_list[i];
    }

    // 원소들의 합의 제곱
    add = add * add;

    // 합의 제곱이 더 크면
    if (mul < add)
    {
        answer = 1;
    }
    // 곱이 더 크면
    else
    {
        answer = 0;
    }

    return answer;
}