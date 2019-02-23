#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
	bool  a[8];
	int i, c = 0;
	cout << "enter an 8-bit number : ";
	for (i = 0;i < 8;i++)
		cin >> a[i];
	for (i = 0;i < 8;i++)
	{
		if (a[i] == (bool)1)
			c++;
	}
	cout << "number of 1's in the given number are " << c;
	system("pause");
}
