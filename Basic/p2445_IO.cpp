#include <iostream>
using namespace std;

int main()
{
    int test = 0;
    cin >> test;

    for(int i = 1; i <= test; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for(int k = (test-i)*2; k > 0; k--)
        {
            cout << " ";
        }
        for(int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    
    for(int i = test-1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for(int k = (test-i)*2; k > 0; k--)
        {
            cout << " ";
        }
        for(int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}