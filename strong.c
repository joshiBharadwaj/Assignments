#include<stdio.h>
int main()
{
int n,s=0,f=1,r,m;
printf("enter a number:");
scanf("%d",&n);
for(m=n;m!=0;m=m/10)
{r=m%10;
f=1;
while(r!=0)

{f=f*r;
r--;
}
s=s+f;
}
if(s==n)printf("strong number");
else printf("not strong number");
}

