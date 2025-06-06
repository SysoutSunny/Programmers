#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, string control)
{
    int answer = 0;
    answer = n;

    for (int i = 0; i < control.size(); i++)
    {
        // w�� +1
        if (control[i] == 'w')
        {
            answer += 1;
        }
        // s�� -1
        else if (control[i] == 's')
        {
            answer -= 1;
        }
        // d�� +10
        else if (control[i] == 'd')
        {
            answer += 10;
        }
        // a�� -10
        else if (control[i] == 'a')
        {
            answer -= 10;
        }
    }

    return answer;
}