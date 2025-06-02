#include <string>
#include <vector>

using namespace std;

// 단순하게 배열을 두 배로 만드는 문제
// 나는 push_back으로 해서 저 값을 한 번에 넣었는데 다른 사람은 for(auto a : numbers)로 순회로 돌렸음
vector<int> solution(vector<int> numbers)
{
    vector<int> answer;

    for (int i = 0; i < numbers.size(); i++)
    {
        answer.push_back(numbers[i] * 2);
    }

    return answer;
}