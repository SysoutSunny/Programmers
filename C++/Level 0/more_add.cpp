#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;

    string aTob = "";          // a + b ���ڿ�
    string bToa = "";          // b + a ���ڿ�
    string s_a = to_string(a); // a ���ڿ� ġȯ
    string s_b = to_string(b); // b ���ڿ� ġȯ

    aTob += s_a + s_b; // a + b ���ڿ� ���ϱ�
    bToa += s_b + s_a; // b + a ���ڿ� ���ϱ�

    int ab = stoi(aTob); // a + b�� ���������� ��ȯ
    int ba = stoi(bToa); // b + a�� ���������� ��ȯ

    // ���� a + b�� �� ũ��
    if (ab >= ba)
    {
        answer = ab;
    }
    // b + a�� �� ũ�ٸ�
    else
    {
        answer = ba;
    }

    return answer;
}