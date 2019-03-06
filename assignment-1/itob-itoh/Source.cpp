#include<iostream>
#include<stdio.h>

using namespace std;
void itob(int, int*);
void itoh(int, int*);

int main()
{
	int ch, number, s[8] = { 0 };
	cout << "enter your choice : " << endl;
	cout << "1.To convert integer to binary" << endl << "2.To convert integer to hexadecimal";
	cin >> ch;
	cout << "enter integer : ";
	cin >> number;
	switch (ch)
	{
	case 1: itob(number, s);
		break;
	case 2: itoh(number, s);
		break;
	default:cout << "enter valid choice";
		break;
	}
	getchar();
	return 0;
}
void itob(int n, int* s)
{
	int i = 0;
	while (n > 0)
	{
		s[i] = n % 2;
		n = n / 2;
		i++;
	}
	cout << "binary representation is : ";
	for (i = 7;i >= 0;i--)
	{
		if ((i + 1) % 4 == 0)
			cout << " ";
		cout << s[i];
	}
	getchar();
}
void itoh(int n, int* s)
{
	int i = 0, remainder;
	while (n > 0)
	{
		remainder = n % 16;
		if (remainder == 10)
			s[i] = 'A';
		else if (remainder == 11)
			s[i] = 'B';
		else if (remainder == 12)
			s[i] = 'C';
		else if (remainder == 13)
			s[i] = 'D';
		else if (remainder == 14)
			s[i] = 'E';
		else if (remainder == 15)
			s[i] = 'F';
		else
			s[i] = remainder;


		i++;
		n = n / 16;
	}
	cout << "hexadecimal representation is :";
	for (i = 7;i >= 0;i--)
	{
		if ((i + 1) % 4 == 0)
			cout << " ";
		if (s[i] > 9)
			cout << (char)s[i];
		else
			cout << s[i];
	}
	getchar();

}
