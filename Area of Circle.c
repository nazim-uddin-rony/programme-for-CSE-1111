
#include<stdio.h>
#include<math.h>
int main(){
    /* 'r' is the Radius of a circle
       'A' is the Area of a circle
     input radius by user */
    float r, A;
    printf("Enter the Radius of Circle: ");
    scanf("%f", &r);


    /* The Formula of Area of a Circle */
    A = M_PI * r * r;

    printf("\n\nThe Area of the Circle with Radius %.2f is : %.2f \n\n", r, A );
    return 0;

}


