#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	int testcase;
	cin >> testcase;

	for(int i = 0; i < testcase; i++)
	{
		string num1, num2;
		getline(cin, num1, ',');
		getline(cin, num2);
	
		cout << atoi(num1.c_str()) + atoi(num2.c_str()) << "\n";
	
	}

	return 0;
}

