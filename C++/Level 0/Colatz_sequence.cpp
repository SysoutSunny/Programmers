#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;

    answer.push_back(n);

    // n�� 1�� �� ������
    while (n != 1)
    {
        // ¦����
        if (n % 2 == 0)
        {
            n /= 2;
        }
        // Ȧ����
        else
        {
            n = 3 * n + 1;
        }
        answer.push_back(n);
    }

    return answer;
}