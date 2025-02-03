#include <iostream>
using namespace std;

int main()
{

    // 111111
    // 222222
    // 333333
    // 444444
    // 555555

    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
         cout << i;
         j++;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}