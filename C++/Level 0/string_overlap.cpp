#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
    string answer = "";

    // overwrite size��ŭ �ϴ� ������ ġȯ�ϱ� ���ؼ�
    for (int i = 0; i < overwrite_string.size(); i++)
    {
        // ġȯ ����
        my_string[s + i] = overwrite_string[i];
    }

    answer = my_string;

    return answer;
}