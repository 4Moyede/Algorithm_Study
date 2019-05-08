#include <iostream>
using namespace std;


int main()
{
	int input;
	cin >> input;

	int star;
	int blank = 0;

	for (; blank < input; blank++)
	{
		star = input - blank;
		for (int loop1 = 0; loop1 < blank; loop1++)
			cout << " ";
		for (int loop2 = 0; loop2 < star; loop2++)
			cout << "*";
		cout << "\n";
	}

    return 0;
}
