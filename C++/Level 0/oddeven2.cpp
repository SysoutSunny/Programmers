#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;

    // Ȧ�����
    if (n % 2 != 0)
    {
        // n ������ Ȧ���� ��� ���� ���� ��
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                // Ȧ���� i�� ���ϱ�
                answer += i;
            }
        }
    }

    // ¦�����
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                // ¦���� i�� �����ؼ� ���ϱ�
                answer += i * i;
            }
        }
    }

    return answer;
}