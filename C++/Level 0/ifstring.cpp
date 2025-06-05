#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m)
{

    // <= 맞으면 1 아니면 0
    if (ineq == "<")
    {
        // 조건 안에 조건 넣음으로써 <=을 충족
        if (eq == "=")
        {
            return n <= m;
        }
        // 아니면 <
        else if (eq == "!")
        {
            return n < m;
        }
    }
    // >= 맞으면 1 아니면 0
    else if (ineq == ">")
    {
        // 조건 안에 조건 넣음으로써 >=을 충족
        if (eq == "=")
        {
            return n >= m;
        }
        // 아니면 >
        else if (eq == "!")
        {
            return n > m;
        }
    }
}