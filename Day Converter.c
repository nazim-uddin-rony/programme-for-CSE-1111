#include<stdio.h>
int main(){
/* Input the total Days by user */
int Day, day, week, year;
printf("Enter total Days:\n\n");
scanf("%d", &Day);
/* Conversion Formula for Day to Year, Week and Days*/
year = Day / 365;
week = (Day-(year*365))/7;
day = Day-(week*7)-(year*365);

printf("\n\n%d Days = %d Years %d Weeks %d Days\n\n",Day, year, week, day);

return 0;

}
