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
scanf("%d", &x.n);
printf("/");
scanf("%d", &x.d);
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
{x = sum.d - 1;}
else
{x = sum.n - 1;}
while(x > 1)
{
if(sum.n % x == 0 && sum.d % x == 0)
{
sum.n /= x;
sum.d /= x;
}
x--;
}
printf("The sum of the fractions is %d/%d\n", sum.n, sum.d);
return 0;
}
