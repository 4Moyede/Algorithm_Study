#include <iostream>
using namespace std;


int main()
{
	int input;
	cin >> input;

	int star = 1;
	int blank;

	for (; star <= input; star++)
	{
		blank = input - star;
		for (int loop1 = 0; loop1 < blank; loop1++)
			cout << " ";
		for (int loop2 = 0; loop2 < star; loop2++)
			cout << "*";
		cout << "\n";
	}

    return 0;
}

