#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string, string is_suffix)
{
    int answer = 0;
    vector<string> temp;

    for (int i = 0; i < my_string.size(); i++)
    {
        temp.push_back(my_string.substr(i)); // ���̻� �迭 �����
    }

    // ��ü ��ȸ
    for (auto &a : temp)
    {
        if (a == is_suffix)
        {
            answer = 1;
        }
    }

    return answer;
}