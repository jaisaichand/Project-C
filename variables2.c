#include <stdio.h>

void main()
{
printf("Enter inputs in same order 1.Integer\n2.Char\n3.String\n4.Float\n5.long int");
int i; char g;
float re; long int ki; 
char iot[6];
scanf("%d %c %s %f %ld", &i, &g, iot, &re, &ki);
printf("Printing al the variables  %d %c %s %f %ld", i, g, iot, re, ki);
printf("==================================");
}
