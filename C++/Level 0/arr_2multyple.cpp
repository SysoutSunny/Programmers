#include <string>
#include <vector>

using namespace std;

// �ܼ��ϰ� �迭�� �� ��� ����� ����
// ���� push_back���� �ؼ� �� ���� �� ���� �־��µ� �ٸ� ����� for(auto a : numbers)�� ��ȸ�� ������
vector<int> solution(vector<int> numbers)
{
    vector<int> answer;

    for (int i = 0; i < numbers.size(); i++)
    {
        answer.push_back(numbers[i] * 2);
    }

    return answer;
}