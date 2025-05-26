#include <string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    stack<char> stk; // 스택

    for (int i = 0; i < s.length(); i++)
    {
        //( 열린 괄호라면
        if (s[i] == '(')
        {
            // 넣기
            stk.push('(');
        }
        //) 닫힌 괄호라면
        else
        {
            // 스택이 비어있으면 false
            if (stk.empty())
            {
                // 아무것도 없으니까 false
                return false;
            }
            // 아니면 ( 열린 괄호 빼기
            else
            {
                stk.pop();
            }
        }
    }
    // 이 상황이면 비어 있으면 true니까
    return stk.empty();
}