//WAP to find the sum of two fractions.
#include <stdio.h>
typedef struct fraction
{
    int n; //numerator
    int d; //denominator
} frac;
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
    int x;
    sum.n = (a.n * b.d) + (b.n * a.d);
    sum.d = (a.d * b.d);
    for (int i = 1; i <= sum.n && i <= sum.d; i++)
    {
        if (sum.n % i == 0 && sum.d % i == 0)
            x = i;
    }
    sum.n /= x;
    sum.d /= x;
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
