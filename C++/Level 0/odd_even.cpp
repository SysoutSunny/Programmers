#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    // n�� ¦����
    if (n % 2 == 0)
    {
        cout << n << " is even" << endl;
    }
    // Ȧ����
    else
    {
        cout << n << " is odd" << endl;
    }

    return 0;
}