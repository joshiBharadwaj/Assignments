#include<stdio.h>
int main()
{
int i=1,n,es=0;
printf("enter n value\n");
scanf("%d",&n);
while(i<=n)
{
if(i%2==0)
{es=es+i;}
i++;

}
printf("%d",es);
}
