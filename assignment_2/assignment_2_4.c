#include <stdio.h>

float taylor_series(int exponent, int iterations);

int main()
{
    int exponent, iterations; 
    printf("Enter the exponent: ");
    scanf("%i", &exponent);

    printf("Please enter number of iterations:");
    scanf("%i", &iterations);
    printf("The result is: %f", taylor_series(exponent, iterations));

    return 0;
}

float taylor_series(int exponent, int iterations)
{
    int Numerator = 1;
    int Denominator = 1;
    float result = 1;
    for (int i = 1; i <= iterations; i++)
    {
        Numerator *= exponent;
        Denominator *= i;
        result += (float)Numerator / Denominator;
    }
    return result;
}