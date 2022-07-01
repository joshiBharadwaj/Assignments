#include<stdio.h>
int main()
{
	int n,r,c;
	char a='A';
	printf("enter no of rows");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(c==1||c==r||r==n)printf("* ");
			else printf("%c ",a++);
			if(a>'Z') a='A';
		}
		printf("\n");
	}

}
