#include <string>
#include <vector>

using namespace std;

// ����ȯ�� ���� �ʰ� �׳� �ڸ����� *= 10�� ��� ���ϴ� ����� ����

int solution(vector<int> num_list)
{
    int answer = 0;
    string odd = "";  // Ȧ��
    string even = ""; // ¦��

    for (int i = 0; i < num_list.size(); i++)
    {
        // ¦����
        if (num_list[i] % 2 == 0)
        {
            even += to_string(num_list[i]);
        }
        else
        {
            odd += to_string(num_list[i]);
        }
    }

    answer = stoi(even) + stoi(odd);

    return answer;
}