#include<stdio.h>
void main()
{
  void minmax(int array[],int length,int *min,int *max);
  int array[]={12,4,8,14,3,21,45,18,1,6,9,2};
  int length,min,max;
  clrscr();
  length=0;
  while(array[length]!=NULL)
  {
     length++;
  };
  minmax(array,length,&min,&max);
  printf("\nminimum=%d",min);
  printf("\nmaximum=%d",max);
  getch();
}

void minmax(int array[],int length,int *min,int *max)
{
    int i;
    *min=*max=array[0];

    for(i=1;i<length;i++)
    {
       if(*min>array[i])
        *min=array[i];
       else if(*max<array[i])
        *max=array[i];
    }
}
