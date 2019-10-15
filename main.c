#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int square(int n);

int main(void)
{
	int result	;
	result = square(5)	;
	printf("%d", result);
}

int square (int n)
{
	return (n*n);
}
