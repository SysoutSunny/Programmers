#include <string>
#include <vector>
using namespace std;

// ����� ��
// �ݺ����� i�� ���ʴ�� ������ �������� 0�̸� �� ���� �� ���ϴ� ����
int solution(int n)
{
    int answer = 0;

    // n���� ��
    for (int i = 1; i <= n; i++)
    {
        // ���� i�� ������ �� �������� 0�̸� ������ �Ҹ�
        if (n % i == 0)
        {
            // ����� ��
            answer += i;
        }
    }

    return answer;
}