#include<stdio.h>
int main()
{
	int a[100],i,temp,n;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter %d integers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
                a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("reversed elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

