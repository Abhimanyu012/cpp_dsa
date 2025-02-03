#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the input:";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i << "" << endl;
    //     i++;
    // }

    // cout<<"this is sum";

    // cout<<"Enter your input for Sum: ";
    // int n =5;
    // cin>>n;
    // int i = 1;
    // int sum = 0;

    // while (i <= n)
    // {
    //     /* code */
    //     sum=sum+i;
    //     i++;
    // }
    //     cout<<sum<<endl;

    // prime number

    int n;
    cout << "Enter your number:";
    cin >> n;
    int i = 2;
    while (i < n)
    {
        /* code */
            if (n % i == 0)
            {
                cout << "this is not prime for "  << i << endl;
            }
            else
            {
                cout << "This is prime for " << i<<endl;
            }
    i++;
    }

    // int n;
    // cout << "Enter your number:";
    // cin >> n;
    // if(n%)

    return 0;
}
