#include <iostream>

#include <cstdlib>

using namespace std;



int main()

{

	int n, r = 0, s = 0;

	cin >> n;

	getchar();

	while (n > 0)

	{

		r = n % 10;

		s = s + r;

		n = n / 10;

	}

	cout << s;

	getchar();

}


