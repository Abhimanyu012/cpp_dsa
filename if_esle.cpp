#include <iostream>
using namespace std;
int main()
{
    //   1st exmple

    int a = 2;
    int b = a + 1;

    if ((a = 3) == b)
    {
        cout << "This is if condition " << a;
    }
    else
    {
        cout << "This is else condition " << a + 1;
    }
}