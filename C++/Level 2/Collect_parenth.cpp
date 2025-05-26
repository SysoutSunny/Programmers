#include <string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    stack<char> stk; // ����

    for (int i = 0; i < s.length(); i++)
    {
        //( ���� ��ȣ���
        if (s[i] == '(')
        {
            // �ֱ�
            stk.push('(');
        }
        //) ���� ��ȣ���
        else
        {
            // ������ ��������� false
            if (stk.empty())
            {
                // �ƹ��͵� �����ϱ� false
                return false;
            }
            // �ƴϸ� ( ���� ��ȣ ����
            else
            {
                stk.pop();
            }
        }
    }
    // �� ��Ȳ�̸� ��� ������ true�ϱ�
    return stk.empty();
}