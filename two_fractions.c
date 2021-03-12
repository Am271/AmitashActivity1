//WAP to find the sum of two fractions.
#include <stdio.h>
typedef struct fraction
{
   int n; //numerator
   int d; //denominator
} frac;
int getgcd(int a, int b)
{
    if (a == 0)
        return b;
    return getgcd(b%a, a);
}
frac reducefrac(frac sum, int x)
{
   sum.n /= x;
   sum.d /= x;
   return sum;
}
frac getfrac()
{
   frac x;
   printf("Enter the fraction (numerator and denominator): ");
   scanf("%d%d", &x.n, &x.d);
   return x;
}
frac add(frac a, frac b)
{
   frac sum;
   int gcd;
   sum.n = (a.n * b.d) + (b.n * a.d);
   sum.d = (a.d * b.d);
   gcd = getgcd(sum.n, sum.d);
   sum = reducefrac(sum, gcd);
   return sum;
}
void display(frac sum)
{
   printf("The sum of the fractions is %d/%d\n", sum.n, sum.d);
}
int main()
{
   frac a, b, sum;
   a = getfrac();
   b = getfrac();
   sum = add(a, b);
   display(sum);
   return 0;
}
