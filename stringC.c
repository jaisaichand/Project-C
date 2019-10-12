#include <stdio.h>
#include <string.h>
void main()
{
char de[15];
char fe[15];
char ge[15];
char se[15];
int val;
scanf("%s %s %s",de ,fe ,ge);
val=strcmp(de,fe);
if(val==0)
{
printf("both strings are same");

}

else {
printf("strings are not equal");
}

printf("concartenated string is %s",strcat(fe,ge));
printf("coping string %s",strcpy(se,ge));

}
