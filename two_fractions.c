//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct fraction
{
int n; //numerator
int d; //denominator
}frac;
frac getfrac()
{
frac x;
printf("Enter the fraction (numerator and denominator): ");
scanf("%d%d", &x.n, &x.d);
return x;
}
int main()
{
frac a, b, sum;
int x;
a = getfrac();
b = getfrac();
sum.n = (a.n * b.d) + (b.n * a.d);
sum.d = (a.d * b.d);
if(sum.n > sum.d)
{x = sum.d;}
else
{x = sum.n;}
while(x > 1)
{
if(sum.n > x && sum.n % x == 0 && sum.d > x && sum.d % x == 0)
{
sum.n /= x;
sum.d /= x;
}
else
x--;
}
printf("The sum of the fractions is %d/%d\n", sum.n, sum.d);
return 0;
}
