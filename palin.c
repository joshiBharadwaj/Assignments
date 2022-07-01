#include<stdio.h>
int main()
{
int n,a,b,rev=0,r;
printf("enter number of palindromes to print\n");
scanf("%d",&n);
for(a=1;a<=n;a++)
{b=a;
rev=0;
while(b!=0)
{r=b%10;
rev=rev*10+r;
b=b/10;
}
if(rev==a)printf("%-4d",a);
}
}
