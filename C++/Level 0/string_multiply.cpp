#include <string>
#include <vector>

using namespace std;

// 단순하게 문자열을 곱하는 문제
string solution(string my_string, int k)
{
    string answer = "";

    for (int i = 0; i < k; i++)
    {
        answer += my_string;
    }

    return answer;
}