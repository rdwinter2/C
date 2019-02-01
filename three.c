/**
* Author: Davey Winter
* Date: 2019/1/30
*
* Assignment 1 problem 3
*
*/
#include <stdio.h>
#include <math.h>
int R1, R2, R3, Voltage;
double series, parallel, rParallel;
int main(void)
{

printf("Enter values of R1, R2, and R3 (in Ohm): \n");
scanf("%d %d %d", &R1, &R2, &R3);
printf("Enter the Voltage: \n");
scanf("%d", &Voltage);


series = (double)Voltage/(double)(R1+R2+R3);
rParallel = (double)1/R1+(double)1/R2+(double)1/R3;
parallel = (double)Voltage*(double)rParallel;

printf("Current through reistors in series: %.2lf A\n", series);
printf("Current through reistors in parallel: %.2lf A\n", parallel);

  return 0;
}