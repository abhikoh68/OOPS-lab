#include<stdio.h>
int main()
{
  int i,j,k=0;
  printf("enter two integer");
  scanf("%d%d",&i,&j);
  k=i%j;
  if(k==0)
   printf("divisible %d",i+j);
   else
   printf("not divisible %d",i+j-k);
}
