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
        // stk�� �ƿ� ��� ����
        if (stk.empty())
        {
            // arr[i]�� �ְ� i�� 1����
            stk.push_back(arr[i]);
            i++;
        }
        else
        {
            // ���� stk�� ������ ���Ұ� arr[i]���� ����
            if (stk.back() < arr[i])
            {
                stk.push_back(arr[i]);
                i++;
            }
            // stk�� ������ ���Ұ� arr[i]���� ũ�ų� ����
            else
            {
                stk.pop_back();
            }
        }
    }
    return stk;
}