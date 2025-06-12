#include <string>
#include <vector>

// 일단 0과 5의 공통점을 찾아야함
// string으로 숫자 치환하고 해볼까
using namespace std;

vector<int> solution(int l, int r)
{
    vector<int> answer;

    // l이상 r 이하까지
    for (int i = l; i <= r; i++)
    {
        string s = to_string(i); // i를 string으로 치환
        bool zeroFive = true;    // 0과 5 판별

        for (auto c : s)
        {
            // 0과 5가 아니면
            if (c != '0' && c != '5')
            {
                zeroFive = false;
                break;
            }
        }
        // 만약 0과 5면
        if (zeroFive)
        {
            answer.push_back(i);
        }
    }

    // 만약 아무것도 안들어가고 비어있다면
    if (answer.empty())
    {
        // -1 return
        answer.push_back(-1);
    }

    return answer;
}