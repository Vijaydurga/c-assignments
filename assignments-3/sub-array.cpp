#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n, sum, temp, i, j = 0,flag=0;
	cout << "enter size of array : ";
	cin >> n;
	int *a=NULL;
	a = new int[n];
	cout << "enter array elements : ";
	for (i = 0;i < n;i++)
		cin >> a[i];
	cout << "enter sum of sub-array : ";
	cin >> sum;
	for (i = 0;i < n;i++)
	{
		temp = 0;
		for (j = i;j < n;j++)
		{
			temp = temp + a[j];
			if (temp == sum)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			cout << "sub-array found between indexes " << i << " and " << j;
			break;
		}
	}
	if ( flag == 0)
		cout << "no sub-array found";
	delete a;
	system("pause");
}