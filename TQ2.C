#include<stdio.h>
#include<conio.h>
main()
{
 int i,n;
 clrscr();
 printf("enter any number:");
 scanf("%d",&n);
 for(i=0;n>0;)
 {
 n=n/10;
 i++;
 }
 printf("the total number of digits in a number:%d",i);
 getch();
 }

