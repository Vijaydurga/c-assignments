#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n, i;
	cout << "enter size of array : ";
	cin >> n;
	int *a = NULL;
	a = new int[n];
	cout << "enter array elements : ";
	for (i = 1;i <= n;i++)
		cin >> a[i];
	for (i = 0;i < n;i++)
	{
		for (int j = i;j <= n;j++)
		{
			if (a[i] > 0 && a[j] < 0)
				swap(a[i], a[j]);
		}
	}
	for (i = 1;i <= n;i++)
		cout << a[i] << " ";
	delete a;
	system("pause");
}
void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
