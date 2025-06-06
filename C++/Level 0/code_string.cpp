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
        // mode가 0일때
        if (mode == 0)
        {
            // code[idx]가 1이 아니면서 짝수인 경우
            if (code[idx] != '1' && idx % 2 == 0)
            {
                ret += code[idx];
            }
            // code[idx]가 1이면
            else if (code[idx] == '1')
            {
                // mode를 1로 체인지
                mode = 1;
            }
        }
        // mode가 1일때
        else if (mode == 1)
        {
            // code[idx]가 1이 아니면서 홀수인 경우
            if (code[idx] != '1' && idx % 2 != 0)
            {
                ret += code[idx];
            }
            // code[idx]가 1이면
            else if (code[idx] == '1')
            {
                // mode를 0으로 체인지
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