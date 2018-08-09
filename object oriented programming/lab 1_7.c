#include<stdio.h>
int main()
{
char a[50],b[50];
int l1,l2;
printf("enter two strings");
gets(a);
gets(b);
l1=strlen(a);
l2=strlen(b);
printf("%d",str(a,b));
}
int str(char s[50],char t[50])
{
int l,b,c=0;
l=strlen(s);
b=strlen(t);
while(b!=-1)
if(s[l]!=t[b])
{
    c=1;
break;
}
l--;
b--;

if(c==0)
return 1;
else
return 0;
}


