#include <stdio.h>

char rotate_left( unsigned char x, unsigned int n)
{
    return (x << n) | (x >> (8 - n));
}

char rotate_right( unsigned char x, unsigned int n)
{
    return (x >> n) | (x << (8 - n));
}

int main(void)
{
    unsigned char x;
    unsigned int n;
    int o;

    printf("Please enter an 8 bits number: ");
    scanf("%i", &x);
    printf("Please enter the number of rotate cycles: ");
    scanf("%i", &n);
    printf("Please choose rotation option, enter 0 for Left or 1 for Right: ");
    scanf("%i", &o);
    if (o == 0)
    {
        printf("Left Rotation of %i by %i is ", x, n);
        printf("%d", rotate_left(x, n));
    }
    else if (o == 1)
    {
        printf(" Right Rotation of %i by %i is ", x, n);
        printf("%d", rotate_right(x, n));
    }


	return 0;
}

/*
example:

     7 (00000111) rotate left by  2 --> (00011100) 28

     7 (00000111) rotate right by  2 --> (11000001) -63

*/

