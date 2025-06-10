#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{

    for (int i = 0; i < queries.size(); i++)
    {
        int temp; // 버블 정렬 할 임시 배열
        // 바꿔야하는게 뒤에는 0 1 고정이고 앞이 i네
        // arr[queries[i][0]] arr[queries[i][1]]
        temp = arr[queries[i][0]];
        arr[queries[i][0]] = arr[queries[i][1]];
        arr[queries[i][1]] = temp;
    }

    return arr;
}