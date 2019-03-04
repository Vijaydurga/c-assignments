#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<Bits.h>
using namespace std;
int main()
{
	bool a[8] = { 0 };
	int i, c = 0;
	cout << "enter an 8-bit number : ";
	for (i = 0;i < 8;i++)
		cin >> a[i];
	for (i = 0;i < 8;i++)
	{
		if (a[i] == true)
			c++;
	}
	cout << "number of 1's in the given number are " << c;
	system("pause");
}