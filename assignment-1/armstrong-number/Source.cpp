#include <iostream>

#include <cstdlib>

using namespace std;



int main()

{

	int n, r = 0, s = 0, n1;

	cin >> n;

	getchar();

	n1 = n;

	while (n > 0)

	{

		r = n % 10;

		s = s + r*r*r;

		n = n / 10;

	}

	if (n1 == s)

		cout << "ARMSTRONG NUMBER";

	else

		cout << "NOT";

	getchar();

}