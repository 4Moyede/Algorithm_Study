#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main()
{
    int test = 0;
    vector<int> number;
    cin >> test;
    
    for(int i = 0; i < test; i++)
    {
        int input;
        cin >> input;
        number.push_back(input);
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < test; i++)
    {
        if(number[i] > max)
            max = number[i];
        if(number[i] < min)
            min = number[i];
    }

    cout << min << " " << max << "\n";

    return 0;
}