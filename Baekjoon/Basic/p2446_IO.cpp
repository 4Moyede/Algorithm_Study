#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for(int i = test; i > 0; i--)
    {
        for(int j = test-i; j > 0; j--)
            cout << " ";
        for(int k = 1; k <= i*2-1; k++)
            cout << "*";
        cout << "\n";
    }

    for(int i = 2; i <= test; i++)
    {
        for(int j = test-i; j > 0; j--)
            cout << " ";
        for(int k = 1; k <= i*2-1; k++)
            cout << "*";
        cout << "\n";
    }

    return 0;
}