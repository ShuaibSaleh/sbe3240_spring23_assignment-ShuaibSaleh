#include <stdio.h>


int main(void)
{

// declare variable to store the number of rows in upper part of the diamond
int n;
printf("Please enter the number of the rows in upper part of the diamond: ");
scanf("%i", &n);

// Nested loops to print higher part of the diamond shape
for(int i=1;i<=n;i++)
{ 
	for(int j= n-i; j > 0; j--)
	{
		printf(" ");
	}
	for (int m = 1; m <= i; m++)
	{
		
        printf("* ");
	}
	printf("\n");
}


// Nested loops to print lower part of the diamond shape

for (int i = 1; i < n; i++)
{
	for (int j = 1 ; j<=i; j++)
	{
		printf(" ");
	}
	for (int m = n-i; m > 0; m--)
	{
		printf("* ");
	}
	printf("\n");
}


return 0;
}