#include<stdio.h>

int main()

{

	char *color[6] = { "red", "green", "blue", "white", "black", "yellow" };

	printf_s("%d", color);

	printf_s("%d", (color + 2));

	printf_s("%s", *color);

	printf("%s", *(color + 2));

	printf("%d %s", color[5], *(color + 5));


	return 0;

}