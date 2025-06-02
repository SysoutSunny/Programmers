#include <string>
#include <vector>

// �ִ������� �ּҰ������ ���ϴ� ����
// �ִ����� : ��Ŭ���� ȣ����, a % b�� �Ͽ� �������� ���� ���� ��� ������ ��
// �ּҰ���� : �� �ڿ��� ���ϰ� �ִ������� ������ ��
using namespace std;

// �ִ� ����� ���ϴ� ��Ŭ���� ȣ����
int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }

    return gcd(b, a % b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
    vector<int> answer;

    // ���� : �ϴ� �ּҰ������ ���ϱ�
    int boonja = numer1 * denom2 + numer2 * denom1;
    // �и� : �ּҰ���� ���ϱ�
    int boonmo = denom1 * denom2;
    // �ִ������� �м��� ���м��� ����� ���ؼ�
    int gcd_value = gcd(boonja, boonmo);

    answer.push_back(boonja / gcd_value);
    answer.push_back(boonmo / gcd_value);

    return answer;
}