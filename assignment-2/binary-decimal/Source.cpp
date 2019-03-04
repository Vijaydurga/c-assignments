#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void main()
{
	int ch, number, i = 0, sum = 0, m = 0;
	bool a[8] = { 0 };
	cout << "enter your choice : " << endl << "1.convert binary to decimal " << endl << "2.convert decimal to binary" << endl;
	cin >> ch;
	switch (ch)
	{
	case 1:
	{
		cout << "enter an 8-bit binary  number";
		for (i = 0;i < 8;i++)
			cin >> a[i];
		for (i = 0;i<8;i++)
		{
			sum = sum + a[i] * pow(2, m);
			m++;
		}
		cout << "decimal eqivalent is :" << sum;
		break;
	}
	case 2:
	{
		cout << "enter decimal number" << endl;
		cin >> number;
		while (number > 0)
		{
			a[i++] = number % 2;
			number = number / 2;
		}
		for (i = 7; i >= 0; i--)
			cout << a[i];
		cout << endl;
		break;
	}
	default: cout << "enter valid input";
		break;
	}
	system("pause");
}