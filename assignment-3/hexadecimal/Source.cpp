#include<cstdlib>
#include<iostream>

using namespace std;
int main()
{
	int b[4], ch, reminder, i = 0,j, number;
	cout << "enter a hexadecimal number : ";
	for (i = 0;i<4;i++)
		cin >> b[i];
	cout << "enter your choice : " << endl;
	cout << "1.To perform 1's complement and and display hexadecimal eqivalent of the number " << endl;
	cout << "2.To perfrom masking operation and display hexadecimal eqivalent of the number " << endl;
	cout << "3.To perfrom shifting operation and display hexadecimal equivalent of the number " << endl;
	cin >> ch;
	switch (ch)
	{
	case 1:
	{
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
			/*while (number > 0)
			{
			reminder = number % 10;
			while (reminder > 0)
			{
			binary[i] = reminder % 2;
			i++;
			reminder = reminder / 2;
			}
			number = number / 10;
			}
			for (i = 0;i < 8;i++)
			cout << binary[i];*/
		}
		break;
	case 2:
	{


	}
	break;
	case 3:
	{


	}

default : break;

	}
	system("pause");
	}