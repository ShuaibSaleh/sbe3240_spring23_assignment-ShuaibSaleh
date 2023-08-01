#include <stdio.h>


int main(void){
    
    /* declare variables */
    int time_in_sec, hh, mm, ss;
    
    /* ask the user to enter time in seconds */
    printf("Please enter time in seconds: ");
    /* store the input in the time_in_sec variable */
    scanf("%d", &time_in_sec);

    /* calculate the hours, minutes and seconds */
    hh = time_in_sec/3600;
    mm = (time_in_sec%3600)/60;
    ss = (time_in_sec%3600)%60;

    /* print the time in the hours:minutues:seconds format */
    printf("Time in hours:minutes:seconds is: %i:%i:%i",hh,mm,ss);

    return 0;

}