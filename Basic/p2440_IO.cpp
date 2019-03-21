#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    for(int i = 1; i <= a; i++)
    {
        for(int j = (a-i+1); j > 0; j--)
        {
            cout << "*";
        }
        cout << "\n";    
    }
    
    return 0;
}