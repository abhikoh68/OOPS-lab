#include <stdio.h>
int main()
{
    char ch[100],i;
    printf("Enter a string");
    gets(ch);
    for(i=0; ch[i]!=0; i++);
       printf("Length of string %d",i);
    return 0;
}
