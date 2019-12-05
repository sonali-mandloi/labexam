#include<stdio.h>
int main()
{
int a=40,b=20;
printf("***********calculator****************\n");
printf("enter your choice \n 1-add \n 2-sub \n 3-mulltiply \n 4-division");
int n;
scanf("%d",n);
switch(n)
{
case 1:
printf("addition is %d \n",a+b);
break;
case 2:
printf("substraction is %d \n",a-b);
break;
case 3:
printf("multiplication is %d \n",a*b);
break;
case 4:
printf("division is %d \n",a/b);
break;
}
return 0;
}
