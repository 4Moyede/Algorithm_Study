#include <iostream>
using namespace std;

int main()
{    
    int num1, num2;
    bool go = true;
    while(go)
    {
        cin >> num1;
        if(!cin.eof())
        {
            cin >> num2;
            cout << num1 + num2 << "\n";
        }
        else
        {
            go = false;
        }
    }
    
    return 0;
}
