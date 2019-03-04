#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int number, remainder = 0, reverse_number = 0;
	cout << "enter number : ";
	cin >> number;
	getchar();
	while (number > 0)
	{
		remainder = number % 10;
		reverse_number = reverse_number * 10 + remainder;
		number = number / 10;
	}
	cout << "reverse of given number is : " << reverse_number;
	getchar();
}