#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{

    for (int i = 0; i < queries.size(); i++)
    {
        int temp; // ���� ���� �� �ӽ� �迭
        // �ٲ���ϴ°� �ڿ��� 0 1 �����̰� ���� i��
        // arr[queries[i][0]] arr[queries[i][1]]
        temp = arr[queries[i][0]];
        arr[queries[i][0]] = arr[queries[i][1]];
        arr[queries[i][1]] = temp;
    }

    return arr;
}