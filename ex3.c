#include<stdio.h>
int main(void)
{

  int n,r,c;
printf("enter n value");
scanf("%d",&n);
for(r=0;r<=n;r++)
{
for(c=0;c<=n;c++)
{ 
  if(c==r)printf("$ ");
  else printf("* ");

}
printf("\n");
}

}
