#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string)
{
    vector<string> answer;

    // 읽는 것은 왼 -> 오로 하되 자르는건 뒤에서부터
    for (int i = 0; i < my_string.size(); i++)
    {
        string s; // 임시 문자열 반복문이 실행되면 초기화 해야함
        // 0부터 size까지 니까 banana,
        // 1이면 1부터 size까지니까 anana...
        for (int j = i; j < my_string.size(); j++)
        {
            s += my_string[j];
        }
        answer.push_back(s);
    }

    sort(answer.begin(), answer.end());

    return answer;
}