#include<stdio.h>

void main()
{
char d;
printf("Enter a charector");
scanf("%c",&d);
switch(d)
{
case 'a':
  printf("A for Apple");
  break;
case 'r':
  printf("G for RGV");
  break;
case 'j':
  printf("J for JAI");
  break;
default :
  printf("alphabet is something else");
  break;
}


}
