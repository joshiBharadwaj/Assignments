#include<stdio.h>
int main(void)
{
 char ch;
printf("enter a  character\n");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')ch=ch-32;
else if(ch>='A' && ch<='Z')ch=ch+32;
else printf("invalid character");
printf("%c",ch);

}
