#include<stdio.h>
int fun (int);
int main()
{
	int n , fact;
	printf("Enter a number:");
	scanf("%d",&n);
	fact = fun(n);
	printf("The factorial of %d is %d",n,fact);
	
}

//-------------------//

int fun (int n)
{
	int prod, i;
	prod = 1;
	for (i=1; i<=n; i++)
		prod = prod*i;
	return prod;
}
