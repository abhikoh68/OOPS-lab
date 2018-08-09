#include<malloc.h>
#include<stdio.h>
int main()
{
  int choice,i,n;
  int new;
  char *lis[50];
  printf("1.insert a name\n 2.to delete a name\n 3.to print names\n");
  while(1)
    {
        printf("enter choice u want");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
    printf("enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    lis[i]=(char*)malloc(50);
    printf("student name");
    fflush(stdin);
    gets(lis[i]);
     }
   break;
  case 2:
    printf("enter student u want to delete");
    scanf("%d",&new);
  for(i=new;i<n;i++)
    lis[i]=lis[i+1];
    n--;
    break;
   case 3:
    for(i=0;i<n;i++)
    {
    puts(lis[i]);
    }
    break;
    }
    }
    return 0;
    }

