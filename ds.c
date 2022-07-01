#include<stdio.h>
int main()
{
int n,a,s=0,r;
printf("enter  n value");
scanf("%d",&n);
for(a=1;a<=n;a++)
{s=0;
int b=a;
while(b!=0)
{
r=b%10;
s=s+r;
b=b/10;
}
if(s==10)printf("%-4d",a);
}
}

