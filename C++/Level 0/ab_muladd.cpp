#include <string>
#include <vector>

using namespace std;

// �Ʊ� a + b�� b + a�� ���빮����
int solution(int a, int b)
{
    int answer = 0;

    string ab = to_string(a) + to_string(b); // a + b ���ڿ��� ġȯ
    int aTob = stoi(ab);                     // ���������� ġȯ

    // ���� a + b�� 2 * a * b���� ū ���
    if (aTob > 2 * a * b)
    {
        // a + b�� ��
        answer = aTob;
    }
    // ������ a + b �����϶�� ����
    else if (aTob == 2 * a * b)
    {
        answer = aTob;
    }
    // �ƴϸ� 2 * a * b�� ����
    else
    {
        answer = 2 * a * b;
    }

    return answer;
}