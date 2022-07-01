#include<stdio.h>
int main()
{
int a[100],max=-32768,min=32767,n,i;
printf("enter array size\n");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);

if(max<a[i])max=a[i];
if(min>a[i])min=a[i];
}
printf("max=%d,min=%d",max,min);
}

