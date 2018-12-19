#include<stdio.h>
int main()
{
int year;
scanf("%d", &year);
if(year%400 == 0)
printf("leap year");
else
printf("no");
return 0;
}
