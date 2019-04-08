#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for(int t = 1; t <= testcase; t++)
    {
        int number[10];
        for(int i = 0; i < 10; i++)
            cin >> number[i];
        
        int largest = number[0];
        for(int i = 1; i < 10; i++)
            if( largest < number[i] )
                largest = number[i];

        cout << "#" << t << " " << largest << "\n";
    }

    return 0;
}