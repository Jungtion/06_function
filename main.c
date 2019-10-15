#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{
	int res=1;
	int i;
	
	for(i=1;i<=n;i++)
		res=res*i;
		
	return res;
}

int computeCombination (int n, int r)
{
	int high, low;
	high = factorial(n);
	low = factorial(n-r)*factorial(r);
	
	return(high/low);
}

int main(void)
{
	int n, r	;
	int res		;
	
	printf ("input n and r : ");
	scanf ("%d %d", &n, &r);
	
	res = computeCombination(n, r);
	printf("result is %d\n", res);
	
	return 0;
	
	
}
