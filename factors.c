#include<stdio.h>
int main()
{
int n,i;
printf("enter a number\n");
scanf("%d",&n);
printf("factors of %d are :",n);
for(i=1;i<=n;i++)
{
  if(n%i==0)printf("%-5d",i);
}
}
