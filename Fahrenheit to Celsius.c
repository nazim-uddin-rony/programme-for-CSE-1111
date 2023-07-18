#include<stdio.h>
int main(){

float cel, far;

/*Input Temperature in Fahrenheit */
printf("Enter the Temperature in Fahrenheit: \n", far);
scanf("%f", &far);

/*Fahrenheit to Celsius Conversion Formula  */
cel = (far - 32)*5/9;

printf("%.2f Fahrenheit = %.2f Celsius\n",far,cel);
return 0;

}
