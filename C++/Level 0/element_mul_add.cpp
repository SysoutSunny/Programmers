#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    int mul = 1;
    int add = 0;

    // ��� ���ҵ��� ��
    for (int i = 0; i < num_list.size(); i++)
    {
        mul *= num_list[i];
    }
    // ��� ���ҵ��� ���� �ϴ� ����
    for (int i = 0; i < num_list.size(); i++)
    {
        add += num_list[i];
    }

    // ���ҵ��� ���� ����
    add = add * add;

    // ���� ������ �� ũ��
    if (mul < add)
    {
        answer = 1;
    }
    // ���� �� ũ��
    else
    {
        answer = 0;
    }

    return answer;
}