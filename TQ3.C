#include<stdio.h>
#include<conio.h>
main()
{
  int n,a,b,sum;
  clrscr();
  printf("enter any number:");
  scanf("%d",&n);
  a=n%10;
  while(n>=10)
  {
     n=n/10;
  }
     b=n;
     sum=b+a;
     printf("the sum of first digit and last digit is:%d",sum);
getch();
}
