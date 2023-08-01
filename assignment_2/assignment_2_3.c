#include <stdio.h>

int main(void)
{
    // decleration and intialization of the first two terms
    int first = 0;
    int second = 1;

    // declear variable to store the sum of hte previous two terms
    int nextNum;

    // ask the user for number of terms in the series 
    int n;
    printf("Please enter the number of terms in the series: ");
    scanf("%i", &n);

    // Print first two terms
    printf("%i %i ", first ,second);

    
    for (int i = 2; i < n; i++)
    {
        nextNum = first + second;
        first = second;
        second = nextNum;
        
        // Print the terms starting from the 3rd term to the nth term
        printf("%i ", nextNum);
    }


    return 0;
}