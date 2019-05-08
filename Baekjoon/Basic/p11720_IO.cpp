#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int count;
	int answer = 0;
	
	cin >> count >> input;

	for(int i = 0; i < count; i++)
	{
		answer += ((int)input[i] - (int)'0');
	}	

	cout << answer << "\n";

	return 0;
}
