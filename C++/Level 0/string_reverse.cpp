#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int s, int e)
{
    string answer = "";
    string temp = "";

    // ó�� ���ڿ� ����
    for (int i = 0; i < s; i++)
    {
        answer += my_string[i];
    }

    // �߰� ������ ���ڿ�
    for (int j = e; j >= s; j--)
    {
        answer += my_string[j];
    }

    // ������ ���ڿ� ����
    for (int k = e + 1; k < my_string.size(); k++)
    {
        answer += my_string[k];
    }

    return answer;
}