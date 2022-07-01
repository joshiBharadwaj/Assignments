#include<stdio.h>
int main()
{
	int r,nr,nc,c;
	printf("enter no of rows");
	scanf("%d %d",&nr,&nc);
	for(r=1;r<=nr;r++)
	{
		for(c=1;c<=nc;c++)
		{
			if(c+r>=nr+1)printf("* ");
			else printf(" ");
		}
		printf("\n");
	}
}

