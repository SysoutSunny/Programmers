#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m)
{

    // <= ������ 1 �ƴϸ� 0
    if (ineq == "<")
    {
        // ���� �ȿ� ���� �������ν� <=�� ����
        if (eq == "=")
        {
            return n <= m;
        }
        // �ƴϸ� <
        else if (eq == "!")
        {
            return n < m;
        }
    }
    // >= ������ 1 �ƴϸ� 0
    else if (ineq == ">")
    {
        // ���� �ȿ� ���� �������ν� >=�� ����
        if (eq == "=")
        {
            return n >= m;
        }
        // �ƴϸ� >
        else if (eq == "!")
        {
            return n > m;
        }
    }
}