#include<stdio.h>

void swap_temporary_variable(){

int a = 100, b = 50, c;
c = a;//c = 100
a = b;//a = 50
b = c;//b = 100
 printf("swaping by temporary variables \n a = %d and b = %d\n", a, b);

}
void swap_addition_subtraction(){

int a = 100, b = 50;
a = a + b;//a = 150
b = a - b;//b = 100
a = a - b;//a = 50
 printf("swaping by addition and subtraction \n a = %d and b = %d\n", a, b);

}
void swap_bitwise_xor(){

int a = 100, b = 50;//a = 1100100  b = 110010
a = a ^ b;//a = 1010110
b = a ^ b;//b = 1100100 = 100
a = a ^ b;//a = 110010 = 50
 printf("swaping by Bitwise Xor \n a = %d and b = %d\n", a, b);

}
void swap_without_temporary_variables(){

int a = 100, b = 50;
a = a * b;//a = 1500
b = a / b;//b = 100
a = a / b;//a = 50
 printf("swaping by without temporary variables \n a = %d and b = %d\n", a, b);

}
int main(){

swap_temporary_variable();

swap_addition_subtraction();

swap_bitwise_xor();

swap_without_temporary_variables();

 return 0 ;
}
