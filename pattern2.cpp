#include <bits/stdc++.h>
using namespace std;

void pattern1()
{
    int n = 5;
    // cin >> n;
    cout << "this is oue square pattern: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {

            cout << i << " ";
        }
        cout << i;
        cout << endl;
    }
}
int main()
{
    pattern3();

    return 0;
}