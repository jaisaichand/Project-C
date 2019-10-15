#include <stdio.h>


void main()
{
int g;
printf("Enter your age");
scanf("%d",&g);
printf("Your age is %d",g);

if(g==18)
{
printf("Age is 18, you can vote from this year");
}
else if(g>18)
{
printf("You are eligible to vote");
}
else
{
printf("You are'nt eligible to vote");
}
}

