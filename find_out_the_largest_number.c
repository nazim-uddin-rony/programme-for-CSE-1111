#include<stdio.h>
int main(){

int a, b, c;
printf("Enter three numbers :\n");
scanf(" %d%d%d",&a,&b,&c);

if(a>b && a>c){
    printf("The Largest Number is : %d",a);
}
else if(b>a && b>c){
    printf("The Largest Number is : %d",b);
}
else {
    printf("The Largest Number is : %d",c);
}

return 0;
}
