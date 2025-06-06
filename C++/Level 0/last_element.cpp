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

    // ������ ���Ұ� �� ���� ���Һ��� ũ�ٸ�
    if (answer[last] > answer[last - 1])
    {
        // ������ ���� - �� ���� ����
        a = answer[last] - answer[last - 1];
        answer.push_back(a);
    }
    // ������ ���Ұ� �� ���� ���Һ��� �۴ٸ�
    else
    {
        // ������ ���� * 2
        b = answer[last] * 2;
        answer.push_back(b);
    }

    return answer;
}