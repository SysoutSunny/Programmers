#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
    string answer = "";

    // overwrite size만큼 하는 이유는 치환하기 위해서
    for (int i = 0; i < overwrite_string.size(); i++)
    {
        // 치환 과정
        my_string[s + i] = overwrite_string[i];
    }

    answer = my_string;

    return answer;
}