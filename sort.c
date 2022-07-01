#include<stdio.h>
int main(void)
{
 int l,n,i,r,temp,a[100];
printf("enter array size\n");
scanf("%d",&n);
printf("enter %d integers :",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(l=0;l<=n-2;l++)
{
for(r=l+1;r<=n-1;r++)
{
if(a[l]>a[r])
{
temp=a[l];
a[l]=a[r];
a[r]=temp;
}
}
}
printf("sorted elements are: \n");
for(i=0;i<n;i++)
{
printf("%-4d",a[i]);

}
puts("hi");
}
