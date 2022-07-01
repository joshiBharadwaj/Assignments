#include<stdio.h>
int main()
{
int n,t,i;
printf("enter number of tables to print");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
for(t=1;t<=n;t++)
{
printf("%d*%d=%-4d  ",t,i,t*i);
}

printf("\n");
}

}

