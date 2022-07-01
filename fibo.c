#include<stdio.h>
int main()
{
	int n,f1=0,f2=1,f3,i;
	printf("enter n value:\n");
        scanf("%d",&n);
	printf("0    1   ");
	for(i=3;i<=n;i++)
        {
	  f3=f1+f2;
	  printf("%-10d",f3);
	  f1=f2;
	  f2=f3;
	}
}
