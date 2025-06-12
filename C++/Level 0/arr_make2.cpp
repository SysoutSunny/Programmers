#include <string>
#include <vector>

// �ϴ� 0�� 5�� �������� ã�ƾ���
// string���� ���� ġȯ�ϰ� �غ���
using namespace std;

vector<int> solution(int l, int r)
{
    vector<int> answer;

    // l�̻� r ���ϱ���
    for (int i = l; i <= r; i++)
    {
        string s = to_string(i); // i�� string���� ġȯ
        bool zeroFive = true;    // 0�� 5 �Ǻ�

        for (auto c : s)
        {
            // 0�� 5�� �ƴϸ�
            if (c != '0' && c != '5')
            {
                zeroFive = false;
                break;
            }
        }
        // ���� 0�� 5��
        if (zeroFive)
        {
            answer.push_back(i);
        }
    }

    // ���� �ƹ��͵� �ȵ��� ����ִٸ�
    if (answer.empty())
    {
        // -1 return
        answer.push_back(-1);
    }

    return answer;
}