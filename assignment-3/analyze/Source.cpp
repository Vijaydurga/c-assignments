#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int x[] = { 10,20,30,40,50,60,70,80 };
	printf("%d\n", x);
	printf("%d\n", x + 2);
	printf("%d\n", *x);
	printf("%d\n", *x + 2);
	printf("%d\n", *(x + 2));
	system("pause");
}