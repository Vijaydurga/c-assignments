#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int number1, number2, i = 0, j = 0, c = 0;
	cout << "enter two numbers: ";
	cin >> number1 >> number2;
	getchar();
	if (number1 > number2)
		cout << "enter valid numbers";
	else
	{
		for (i = number1; i <= number2; i++)
		{
			c = 0;
			for (j = 1; j <= i; j++)
			{
				if (i%j == 0)
					c++;
			}
			if (c == 2)
				cout << "  " << i;

		}
	}
	getchar();

}