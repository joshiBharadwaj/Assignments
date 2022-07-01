#include<stdio.h>
int main()
{
	int  nr,nc,r,c;
        char U='A',l='a';
	printf("enter no of rows and columns");//enter rows and columns no
	scanf("%d %d",&nr,&nc);
	for(r=1;r<=nr;r++)
	{
		for(c=1;c<=nc;c++)
		{
			if(r%2==0)printf("%c ",l);
			else printf("%c ",U);
		}
		printf("\n");
		if(r%2==0)l++;
		else U++;
	}
}


