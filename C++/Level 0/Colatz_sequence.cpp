#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;

    answer.push_back(n);

    // n이 1이 될 때까지
    while (n != 1)
    {
        // 짝수면
        if (n % 2 == 0)
        {
            n /= 2;
        }
        // 홀수면
        else
        {
            n = 3 * n + 1;
        }
        answer.push_back(n);
    }

    return answer;
}