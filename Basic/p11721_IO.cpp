#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	
	int index = 0; 
	while(index != input.length())
	{
		for(int i = 0; i < 10 && index < input.length(); i++)
		{
			cout << input[index];
			index++;
		}
		cout << "\n";
	}

	return 0;
}
