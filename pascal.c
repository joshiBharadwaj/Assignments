#include<stdio.h>
int main()
{
int n,r,c,a,s;
printf("enter number of rows\n");
scanf("%d",&n);
for(r=0;r<n;r++)
{
 for(s=1;s<n-r;s++)
  printf("  ");

for(c=0;c<=r;c++)
{
if(c==r||c==0)a=1;
else a=a*(r-c+1)/c;
printf("%4d",a);
}
printf("\n");
}
}
