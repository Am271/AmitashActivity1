#include <stdio.h>
void input(int *x, int *y)
{
	printf("Enter 1st number: ");
	scanf("%d", x);
	printf("Enter 2nd number: ");
	scanf("%d", y);
}
int add(int x, int y)
{
	return x + y;
}
void display(int x, int y, int sum)
{
	printf("Sum of %d and %d is %d\n", x, y, sum);
}
int main()
{
	int x, y, sum;
	input(&x, &y);
	sum = add(x, y);
	display(x, y, sum);
	return 0;
}
