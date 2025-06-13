#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string my_string, vector<vector<int>> queries)
{
    string answer = "";

    for (const auto &query : queries)
    {
        int s = query[0];
        int e = query[1];

        reverse(my_string.begin() + s, my_string.begin() + e + 1);
    }
    answer = my_string;

    return answer;
}