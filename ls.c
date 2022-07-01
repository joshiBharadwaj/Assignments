#include<stdio.h>
int main()
{
	int i,n,ele,f=0,a[100];
	printf("enter array size : ");
	scanf("%d",&n);
	printf("enter %d integers",n);
        for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to search");
	scanf("%d",&ele);
        for(i=0;i<n;i++)
	{
		if(a[i]==ele){printf("%d found in %d cell",ele,i+1);
		f=1;}
	}
	if(f==0)printf("%d element not found",ele);
}
