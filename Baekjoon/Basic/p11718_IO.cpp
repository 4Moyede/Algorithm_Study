#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    bool go = true;

    while(go)
    {
        getline(cin, input);

        if(!cin.eof())
        {
            cout << input << "\n";
        }
        else
        {
            go = false;
        }
        
    } 

    return 0;
}
