#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix)
{
    int answer = 0;
    string temp = "";

    if (my_string.substr(0, is_prefix.size()) == is_prefix)
    {
        answer = 1;
    }

    else
    {
        answer = 0;
    }

    return answer;
}