#include<stdio.h>
int main(void)
{
int n,f=1;

printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
f=f*n;
n--;
}
printf("%d",f);
}
