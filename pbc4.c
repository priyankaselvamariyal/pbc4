#include<stdio.h>
#include<conio.h>
void main()
{
int rev=0,temp;
printf("enter the temp");
scanf("%d",&temp);
while(temp!=0)
{
rev=rev*10;
rev=rev+temp%10;
temp=temp/10;
}
printf("%d",rev);
getch();
}
