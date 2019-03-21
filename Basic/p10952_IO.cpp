#include <iostream>
using namespace std;

int main()
{
    bool go = true;
    while(go)
    {
        int num1, num2;
        cin >> num1 >> num2;
        if(!num1 && !num2)
        {
            go = false;
            continue;
        }
        else
            cout << num1 + num2 << "\n";
    }
    
    return 0;
}
