#include<stdio.h>
int main(void)
{
int a,b,c,d,e,i=1,gcd,f;
printf("enter any two  numbers\n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
f=a*b*c*d*e;
while((i<=a) &&(i<=b)&&(i<=c)&& (i<=d) && (i<=e))
{
if((a%i==0)&&(b%i==0)&&(c%i==0)&&(d%i==0)&&(e%i==0))gcd=i;
i++;
}
printf("Gcd =%d",gcd);

}
