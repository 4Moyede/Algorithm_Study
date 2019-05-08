#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    for(int i = 0; i < input; i++)
    {
        for(int j = input-1; j > i; j--)
        {
            cout << " ";
        }
        for(int k = 0; k < 2*i+1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}