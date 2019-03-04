#include<iostream>
#include<cstdlib>
using namespace std;
int fact(int);
int main()
{
	int number, fac;
	cout << "enter number";
	cin >> number;
	fac = fact(number);
	cout << "factorial of given number is : ";
	cout << fac;
	system("pause");
}
int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return(n*fact(n - 1));
}