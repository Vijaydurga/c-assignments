
#include<cstdlib>
#include<iostream>

using namespace std;
int main()
{
	bool binary[32] = { 0 };
	int number, ch, reminder,i=0;
	cout << "enter a hexadecimal number : ";
	cin>> number;
	cout<< "enter your choice : "<<endl;
	cout<<"1.To perform 1's complement and and display hexadecimal eqivalent of the number "<<endl;
	cout<<"2.To perfrom masking operation and display hexadecimal eqivalent of the number "<<endl;
	cout<<"3.To perfrom shifting operation and display hexadecimal equivalent of the number "<<endl;
	cin>> ch;
	while (number > 0)
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
	for (i=0;i<8 ;i++)
		cout<< binary[i];
	/*switch (ch)
	{
	case 1:
	{
		for (i = 0;i < 8;i++)
		{
			if (a[i] == int(1))
				a[i] = int(0);
			else
				a[i] = int(1);
		}
		for (i = 0;i < 8;i++)
			printf("%d ", a[i]);

	}
	break;
	case 2 :
	{*/

	system("pause");
}