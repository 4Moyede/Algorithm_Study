#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for(int i = 1; i <= test; i++)
    {
        for(int j = test-i; j > 0; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }


    for(int i = test-1; i > 0; i--)
    {
        for(int j = test-i; j > 0; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}