#include<stdio.h>
#include<math.h>
int main(void)
{
 int n,m,r,c=0,s=0;
printf("enter a number\n");
scanf("%d",&n);
m=n;
while(m!=0)
{
c++;
m=m/10;
}
m=n;
while(m!=0)
{
r=m%10;
s=s+pow(r,c);
m/=10;
}
if(n==s)printf("armstrong no\n");
else printf("not armstrong number\n");
}

