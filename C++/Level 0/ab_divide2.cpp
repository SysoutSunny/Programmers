#include <string>
#include <iostream>
#include <vector>

using namespace std;

// int���� ������ �Ǽ����� �������� �������� ���� ������
// ����ȯ ����
int solution(int num1, int num2)
{
    int answer = 0;

    answer = (double)num1 / (double)num2 * 1000;

    return answer;
}