#include <iostream>
#include <conio.h>

using namespace std;

const int max = 80;

int main()
{
	int i = 0;
	char str[max];
	cout << "Enter a string : ";
	cin.getline(str, max);
	char c;
	while ((c = str[i++])!= '\0')
	{
		cout << c;
		if (isspace(c))
		{
			cout << endl;
		}
	}


	_getch();
	return 0;

}

