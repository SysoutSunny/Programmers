#include <string>
#include <vector>

using namespace std;

// 여러가지 방법이 있는데 for 순회로 해도 되고
// 함수를 써도 됨 (accumulatre) 같은거

string solution(vector<string> arr)
{
    string answer = "";

    for (int i = 0; i < arr.size(); i++)
    {
        answer += arr[i];
    }

    return answer;
}