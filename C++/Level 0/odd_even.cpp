#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    // nÀÌ Â¦¼ö¸é
    if (n % 2 == 0)
    {
        cout << n << " is even" << endl;
    }
    // È¦¼ö¸é
    else
    {
        cout << n << " is odd" << endl;
    }

    return 0;
}