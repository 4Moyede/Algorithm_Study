#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if(A < B || (A==3 && B==1) )
        cout << "B\n";
    else
        cout << "A\n";

    return 0;
}