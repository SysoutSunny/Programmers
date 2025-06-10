#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;

    // (0,0) ~ (0,1) �������� (0,2) ���� ��
    // �̰� ��ü ū ����
    for (int i = 0; i < queries.size(); i++)
    {
        int min = 1000001;
        int check = 0;
        // arr[queries[i][0]] ���� arr[queries[i][1]] ������ �ؾ��ϰ� (�ݺ��� j, Ž���ҷ���)
        // 0 ~ 4����, 0���� 3����, 0���� 2���� = 9�� -> �̷��� ���������� = break�� �ݺ��� Ż��
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            // arr[queries[i][2] ���� arr[j]�� �� ũ�鼭 �� �� ���� ���� ��]
            if (queries[i][2] < arr[j] && arr[j] < min)
            {
                // 4 < 1000001 -> 3 < 4 -> min = 3 �̷���
                min = arr[j];
                check = 1;
            }
        }

        if (check == 1)
        {
            answer.push_back(min);
        }
        else
        {
            answer.push_back(-1);
        }
    }

    return answer;
}