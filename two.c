/**
* Author: Davey Winter
* Date: 2019/1/30
*
* Assignment 1 problem 2
*
*/
#include <stdio.h>
int firstPointx, firstPointy, secondPointx, secondPointy;  //defining each point
double slope, intercept;                                   //defining slope and intercept


int main(void)
{
printf("Enter the first point: \n");                      //Asking for the first point x and y
scanf("%d %d", &firstPointx, &firstPointy);               //Storing the first point x and y
printf("Enter the second point: \n");                     //Asking for the second point x and y
scanf("%d %d", &secondPointx, &secondPointy);             //Storing the second point x and y

if (firstPointx == secondPointx && firstPointy == secondPointy) {
  printf("I'm sorry, but these two points are the same");  //If two points are the same it fails
}
else {
  slope = (double)(secondPointy - firstPointy)/(secondPointx - firstPointx);  //Determine slope

  intercept = secondPointy - slope*secondPointx;   //Determine the y intercept

  printf("Slope: %.2lf\n", slope);
  printf("Equation: y = %.2lfx + %.2lf\n", slope, intercept);    //print out slope and equation
  if(slope > 0){
     printf("Slope is positive\n");  //If larger then zero for slope it's positive
  }
  else if (slope < 0) {
     printf("Slope is negative\n");  //If less than zero for slope it's negative
  }
}

  return 0;
}