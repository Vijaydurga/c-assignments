#include <iostream>

#include <cstdlib>

using namespace std;



int main()

{

	int min = 0, max = 0, avg = 0, n = 1, i = 1, s = 0;

	while (n>0)

	{

		cin >> n;



		if (n <= 0)

			break;

		if (i == 1)

		{

			min = n;

			max = n;

		}

		if (max < n)

			max = n;

		if (min > n)

			min = n;

		s = s + n;

		i++;

	}

	getchar();

	avg = s / (i - 1);

	cout << "max=" << max << endl;

	cout << "min=" << min << endl;



	cout << "avg=" << avg << endl;

	getchar();

}