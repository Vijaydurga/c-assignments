#include <iostream>
#include<stdio.h>
#include <cmath>
#include <cstdlib>
using namespace std;

void main()
{
	int remainder = 0, i = 0, sum = 0, m = 0, ch, number;
	 char b[4] = { 0 };
	cout << "enter your choice : " << "1.convert binary to hexadecimal " << endl << "2.convert hexadecimal to binary";
	cin >> ch;
	switch (ch)
	{
	case 1:
	{
		bool a[16] = { 0 };
		cout << "enter an 16-bit binary  number" << endl;
		for (i = 0;i < 16;i++)
			cin >> a[i];
		cout << "hexadecimal eqivalent is : 0x";
		for (i = 0;i < 16;i++)
		{
			sum = sum + a[i] * pow(2, m);
			m++;
			if ((i + 1) % 4 == 0)
			{
				if (sum > 9)
				{
					if (sum == 10)
						cout << "A";
					else if (sum == 11)
						cout << "B";
					else if (sum == 12)
						cout << "C";
					else if (sum == 13)
						cout << "D";
					else if (sum == 14)
						cout << "E";
					else
						cout << "F";
				}
				else
					cout << sum;
				m = 0;
				sum = 0;
			}
		}
	}
	break;
	case 2:
	{
		int j = 0;
		cout << "enter a four digit hexadecimal number " << endl;
		for (i = 0;i<4;i++)
			cin >> b[i];
		for (i = 0;i < 4;i++)
		{
			bool a[4] = { 0 };
			if (b[i] == 'F')
				number = 15;
			else if (b[i] == 'E')
				number = 14;
			else if (b[i] == 'D')
				number = 13;
			else if (b[i] == 'C')
				number = 12;
			else if (b[i] == 'B')
				number = 11;
			else if (b[i] == 'A')
				number = 10;
			else
				number = b[i];
			j = 0;
			while (number > 0)
			{
				a[j++] = number % 2;
				number = number / 2;
			}
			for (int k = 3; k >= 0; k--)
				cout << a[k];
			cout << " ";
		}
	}
	break;
	default: break;
	}
	system("pause");
}