#include<stdio.h>
#include<conio.h>
void main(){
int a,b,sum,diff;
clrscr();
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
sum=a+b;
diff=a-b;
printf("\naddition of %d and %d is :%d",a,b,sum);
printf("\nsubtraction of %d and %d is :%d",a,b,diff);
getch();
}