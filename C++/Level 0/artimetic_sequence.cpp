#include <string>
#include <vector>
#include <iostream>

using namespace std;

// ���� �迭 �� ����� �� �ٷ� ���ص� �ǳ�
int solution(int a, int d, vector<bool> included)
{

    vector<int> v; // �������� �迭
    int answer = 0;

    // �������� �迭 �����
    for (int i = 0; i < included.size(); i++)
    {
        v.push_back(a + i * d);
    }

    for (int i = 0; i < included.size(); i++)
    {
        // ���� true ���
        if (included[i] == true)
        {
            answer += v[i];
        }
    }

    return answer;
}