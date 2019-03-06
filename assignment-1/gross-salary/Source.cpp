#include <iostream>

#include <cstdlib>

using namespace std;



int main()

{

	int gs = 0, basic = 0, hra = 0, da = 0;

	cin >> basic;

	getchar();

	if (basic <= 4000 && basic >= 0)

	{

		hra = 0.1* basic;

		da = 0.5* basic;

		gs = hra + da + basic;

	}

	else if (basic > 4000 && basic <= 8000)

	{



		hra = (20 / 100) * basic;

		da = 0.6 * basic;

		gs = hra + da + basic;

	}

	else if (basic > 8000 && basic <= 12000)

	{



		hra = (25 / 100) * basic;

		da = 0.7* basic;

		gs = hra + da + basic;

	}

	else

	{



		hra = (30 / 100) * basic;

		da = 80 * basic / 100;

		gs = hra + da + basic;

	}

	cout << gs;

	getchar();

}