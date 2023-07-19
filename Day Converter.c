#include<stdio.h>
int main(){
/* Input the total Days by user */
int Day, day, week, year;
printf("Enter Days:\n\n");
scanf("%d", &Day);
/* Conversion Formula for Day to Year, Week and Days*/
year = Day / 365;
week = (Day%365)/7;
day = (Day%365)%7;

printf("\n\n%d Years %d Weeks %d Days\n\n", year, week, day);

return 0;

}
