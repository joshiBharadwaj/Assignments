 #include<stdio.r>
int main(void)
{
long n,i,k,c=0;

printf("enter a number\n");
scanf("%ld",&n);
printf("prime factors are :");

{
for(k=1;k<=i;k++)
{if(i%k==0)c++;
}
if((c==2)&&(n%i==0))
{
printf("%-4ld",i);

}
}
}
