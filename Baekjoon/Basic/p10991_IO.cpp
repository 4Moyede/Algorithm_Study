#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for(int i = 1; i <= test; i++)
    {
        for(int k = test-i; k > 0; k--)
        {
            cout << " ";
        }
        for(int j = 1; j <= i*2-1; j++)
        {
            if(j % 2 != 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}