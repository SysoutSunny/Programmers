#include <string>
#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> arr)
{
    double answer = 0; // ����
    double sum = 0;    // �� ��

    // �迭�� ũ�����
    for (int i = 0; i < arr.size(); i++)
    {
        // �� �� = arr�� ���� ���� ���ϱ�
        sum += arr[i];
        // ��� = �� �� / �迭 ũ��
        answer = sum / arr.size();
    }

    return answer;
}