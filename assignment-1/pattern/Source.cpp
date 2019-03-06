#include <iostream>

#include <cstdlib>

using namespace std;



int main()

{

	int n = 5, i = 0, j = 0, k = 0, l = 0;

	for (i = 1; i <= n; i++)

	{

		for (j = 1; j <= n - i; j++)

			cout << " ";

		for (k = i; k > 0; k--)

			cout << k;

		for (l = 2; l <= i; l++)

			cout << l;



		cout << "\n";

	}

	getchar();

}