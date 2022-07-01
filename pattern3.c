#include<stdio.h>
int main()
{
	int nr,nc,r,c,a;
	printf("enter no of rows and columns");
	scanf("%d %d",&nr,&nc);
	for(r=1;r<=nr;r++)
	{ a=r;
		for(c=1;c<=nc;c++)
		{
			printf("%d ",a++);

		}
		printf("\n");

	}
}



