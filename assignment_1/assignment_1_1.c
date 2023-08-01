#include <stdio.h>
#include <math.h>



int main(void){

    /* declare variables */
    float u;
    float a;
    int hh , mm , ss , time_in_sec;
    float v;
    float s;
    
    /* ask the user to enter the required data and store each in its variable */
    printf("To calculate final velocity and distance please enter the following:\n");
    printf("Intial velocity in m/s: ");
    scanf("%f",&u);
    printf("Acceleration in m/s^2: ");
    scanf("%f",&a);
    printf("Elapsed time in the (hh:mm:ss) format: ");
    scanf("%d:%d:%d", &hh, &mm, &ss);

    /* convert time from hh:mm:ss format to seconds*/
    time_in_sec = (hh*3600) + (mm*60) + ss;

    /* calculate final velocity (v) and distance (s)*/
    v = u + (a * time_in_sec);
    s = (u * time_in_sec) + (0.5 * a * pow(time_in_sec,2));

    /* print the final velocity and the distance */
    printf("The final velocity = %f m/s or %f Km/hr\n",v,(v*3.6));
    printf("The distance = %f m or %f Km",s,(s/1000));


    return 0;

}