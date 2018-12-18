#include<stdio.h>
int main()
{
int number;

printf("Enter the number");
scanf("%If", &number);

if (number <=0)
{
if (number == 0)
printf("You entered 0");
else
printf("You entered a positive number");
}
else
printf("You entered a negative number");
return 0;
}
