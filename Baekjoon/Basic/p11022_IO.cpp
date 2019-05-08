#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    
    for(int i = 0; i < testcase; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;
        
        cout << "Case #" << i+1 << ": " << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    }
    
    return 0;
}
