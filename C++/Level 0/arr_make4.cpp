#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> stk;

    int i = 0;

    while (i < arr.size())
    {
        // stk가 아예 비어 있음
        if (stk.empty())
        {
            // arr[i]를 넣고 i에 1더함
            stk.push_back(arr[i]);
            i++;
        }
        else
        {
            // 만약 stk의 마지막 원소가 arr[i]보다 작음
            if (stk.back() < arr[i])
            {
                stk.push_back(arr[i]);
                i++;
            }
            // stk의 마지막 원소가 arr[i]보다 크거나 같음
            else
            {
                stk.pop_back();
            }
        }
    }
    return stk;
}