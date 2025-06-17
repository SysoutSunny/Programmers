#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l)
{
    vector<int> answer;

    for (int i = 0; i < intStrs.size(); i++)
    {
        string temp = intStrs[i].substr(s, l); // s���� l���� ���ڿ� �ڸ���
        int num = stoi(temp);                  // ���ڿ� ������ ��ȯ

        if (num > k)
        {
            answer.push_back(num);
        }
    }

    return answer;
}