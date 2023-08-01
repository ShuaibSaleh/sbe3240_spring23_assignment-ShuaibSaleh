#include <stdio.h>

/* declaration and definition of a function that returns the maximum integer of three intrgers */
int maximum(int a, int b, int c)
{
    /* initialize max with a */ 
    int max = a;
 
    max = (b>max)?b:max;
    max = (c>max)?c:max;

    return max;
}
/* declaration and definition of a function that returns the minimum integer of three intrgers */
int minimum(int a, int b, int c)
{
     /* initialize max with a */ 
    int min = a;
 
    min = (b<min)?b:min;
    min = (c<min)?c:min;

    return min;
}



int main(void){

    /* declare variables */ 
    int integers[3];
    int max , min ;

    /* declare and intialize variables */ 
    int sum = 0 ;
    float average = 0.0 ;
    int product = 1 ;
    
    /* ask the user to enter three integers */ 
    printf("Please enter three integers: ");

    /* store the integers in the array and calculate their summation and product */
   for(int i = 0; i < 3; ++i) 
    {
     scanf("%i",&integers[i]);
     sum = sum + integers[i];
     product = product * integers[i];
    }

    /* calculate the average */
    average = (float)sum/3;

    /* call and pass arguments to maximum function and store its return in max variable */
    max = maximum(integers[0],integers[1],integers[2]);
    /* call and pass arguments to minimum function and store its return in min variable */
    min = minimum(integers[0],integers[1],integers[2]);
  
    printf("Sum is %i\nAverage is %f\nProduct is %i\nSmallest is %i\nLargest is %i",sum,average,product,min,max);

    return 0;

}

