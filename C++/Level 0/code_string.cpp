#include <string>
#include <vector>

using namespace std;

string solution(string code)
{
    string ret = "";
    int idx;
    int mode = 0;

    for (idx = 0; idx < code.size(); idx++)
    {
        // mode�� 0�϶�
        if (mode == 0)
        {
            // code[idx]�� 1�� �ƴϸ鼭 ¦���� ���
            if (code[idx] != '1' && idx % 2 == 0)
            {
                ret += code[idx];
            }
            // code[idx]�� 1�̸�
            else if (code[idx] == '1')
            {
                // mode�� 1�� ü����
                mode = 1;
            }
        }
        // mode�� 1�϶�
        else if (mode == 1)
        {
            // code[idx]�� 1�� �ƴϸ鼭 Ȧ���� ���
            if (code[idx] != '1' && idx % 2 != 0)
            {
                ret += code[idx];
            }
            // code[idx]�� 1�̸�
            else if (code[idx] == '1')
            {
                // mode�� 0���� ü����
                mode = 0;
            }
        }
    }

    if (ret == "")
    {
        ret += "EMPTY";
    }

    return ret;
}