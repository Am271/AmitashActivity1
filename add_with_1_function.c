//Write a program to add two user input numbers using one function.
#include<stdio.h>
int sum(int a, int b);
int main()
{
printf("Enter two numbers: ");
scanf("%d%d",&x, &y);
printf("Sum of %d and %d is %d\n",x, y, sum(x, y));
return 0;
}
int sum(int a, int b)
{
	return a + b;
}
