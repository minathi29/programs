#include <stdio.h>

void main()
{
int a;
int b;
printf("Enter a's initial value:");
scanf( "%d",&a);
printf("Enter b's initial value:");
scanf( "%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("a's new value: %d ",a);
printf("\nb's new value: %d",b);

}
