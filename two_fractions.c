//WAP to find the sum of two fractions.
#include <stdio.h>
typedef struct fraction
{
    int n; //numerator
    int d; //denominator
} frac;
int getgcd(frac sum)
{
    int x;
    for (int i = 1; i <= sum.n && i <= sum.d; i++)
    {
        if (sum.n % i == 0 && sum.d % i == 0)
            x = i;
    }
    return x;
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
    gcd = getgcd(sum);
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
