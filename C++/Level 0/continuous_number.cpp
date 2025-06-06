#include <string>
#include <vector>

using namespace std;

// 형변환을 하지 않고 그냥 자릿수로 *= 10을 계속 더하는 방법도 있음

int solution(vector<int> num_list)
{
    int answer = 0;
    string odd = "";  // 홀수
    string even = ""; // 짝수

    for (int i = 0; i < num_list.size(); i++)
    {
        // 짝수면
        if (num_list[i] % 2 == 0)
        {
            even += to_string(num_list[i]);
        }
        else
        {
            odd += to_string(num_list[i]);
        }
    }

    answer = stoi(even) + stoi(odd);

    return answer;
}