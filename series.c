#include<stdio.h>
int main()
{
int n,i,s=1;
printf("enter no of digits in series");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i==n)printf("%d%c=",i,253);
else printf("%d%c+",i,253);
s=s+i*i;
}
printf("%d",s);

}
