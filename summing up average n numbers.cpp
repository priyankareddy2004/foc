#include<stdio.h>
int main()
{
  int i,n,sum=0,num;
  float avg;

  printf("\nEnter How many Number you want?\n");
  scanf("%d",&n);

  printf("\nEnter elements one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&num);
     sum = sum +num;
   }

  avg = sum/(float)n;

  printf("\nSum of %d Numbers = %d",n, sum);
  printf("\nAverage of %d Numbers = %.2f",n, avg);

  return 0;
}