#include<stdio.h>
int main(void)
{
int n,i,rev=0,r;
printf("enter a number\n");
scanf("%d",&n);
int m=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(m==rev)printf("%d is palindrome\n",m);
else printf("%d is not palindrome\n",m);
}
