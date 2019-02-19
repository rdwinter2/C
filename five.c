/**
* Author: Davey Winter
* Date: 2019/2/17
*
* Assignment 3 problem 4
*
*/
#include <stdio.h>
double currency, euro, dollar, yen, pounds;
int euroConversion, dollarConversion, conversion;

int main(void)
{
 printf("Input currency value to convert: \n");
 scanf("%lf", &currency);
 printf("Enter 1 if converting from Dollars or 2 if converting from Euros\n");
 scanf("%d", &conversion);
 switch (conversion) {
    case 1:
        printf("Converting to: 1 (Euros)\n");
        printf("Converting to: 2 (Dollars)\n");
        printf("Converting to: 3 (Yen)\n");
        printf("Converting to: 4 (Pounds)\n");
        scanf("%d", &dollarConversion);
        switch (dollarConversion) {
           case 1:
              euro = currency * .85;
              printf("%g dollars is equal to %.2lf euros\n", currency, euro);
              break;
           case 2:
              dollar = currency;
              printf("%g dollars is equal to %.2lf dollars\n", currency, dollar);
              break;
           case 3:
              yen = currency * 110.03;
              printf("%g dollars is equal to %.2lf yen\n", currency, yen);
              break;
           case 4:
              pounds = currency * .78;
              printf("%g dollars is equal to %.2lf pounds\n", currency, pounds);
              break;
           default:
              printf("Enter valid option\n");
              break;
        break;

        }
    case 2:
        printf("Converting to: 1 (Euros)\n");
        printf("Converting to: 2 (Dollars)\n");
        printf("Converting to: 3 (Yen)\n");
        printf("Converting to: 4 (Pounds)\n");
        scanf("%d", &euroConversion);
        switch (euroConversion) {
           case 1:
              euro = currency;
              printf("%g euros is equal to %.2lf euros\n", currency, euro);
              break;
           case 2:
              dollar = currency * 1.18;
              printf("%g euros is equal to %.2lf dollars\n", currency, dollar);
              break;
           case 3:
              yen = currency * 129.47;
              printf("%g euros is equal to %.2lf yen\n", currency, yen);
              break;
           case 4:
              pounds = currency * .91;
              break;
              printf("%g euros is equal to %.2lf pounds\n", currency, pounds);
           default:
              printf("Enter valid option\n");
              break;
        break;
        }
  default:
  printf("Enter 1 or 2\n");
  break;
 }


  return 0;
}