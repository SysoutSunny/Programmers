#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;

    // (0,0) ~ (0,1) 범위에서 (0,2) 값을 비교
    // 이게 전체 큰 범위
    for (int i = 0; i < queries.size(); i++)
    {
        int min = 1000001;
        int check = 0;
        // arr[queries[i][0]] 부터 arr[queries[i][1]] 범위를 해야하고 (반복문 j, 탐색할려고)
        // 0 ~ 4까지, 0부터 3까지, 0부터 2까지 = 9번 -> 이래서 오류였구나 = break로 반복문 탈출
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            // arr[queries[i][2] 보다 arr[j]가 더 크면서 그 중 가장 작은 값]
            if (queries[i][2] < arr[j] && arr[j] < min)
            {
                // 4 < 1000001 -> 3 < 4 -> min = 3 이런식
                min = arr[j];
                check = 1;
            }
        }

        if (check == 1)
        {
            answer.push_back(min);
        }
        else
        {
            answer.push_back(-1);
        }
    }

    return answer;
}