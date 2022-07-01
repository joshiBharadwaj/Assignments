#include<stdio.h>
int main()
{
int n,i,r;
printf("enter a number\n");
scanf("%d",&n);
if(n<0)
{
printf("-");
}
n=-n;
do
{
r=n%10;
printf("%d",r);
n=n/10;
}while(n!=0);
}

