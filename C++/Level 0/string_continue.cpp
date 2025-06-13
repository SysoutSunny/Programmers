#include <string>
#include <vector>

// 인덱스 리스트의 인덱스를 조합하여 string을 만드는 문제
using namespace std;

string solution(string my_string, vector<int> index_list)
{
    string answer = "";

    for (int i = 0; i < index_list.size(); i++)
    {
        answer += my_string[index_list[i]];
    }

    return answer;
}