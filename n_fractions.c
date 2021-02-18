//WAP to find the sum of n fractions.
#include <stdio.h>
typedef struct fraction
{
    int n;
    int d;
} frac;
frac getfrac()
{
    frac a;
    printf("Enter numerator followed by the denominator: ");
    scanf("%d%d", &a.n, &a.d);
    return a;
}
int inputfrac(frac a[])
{
    int n;
    printf("Enter number of fractions: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        a[i] = getfrac();
    }
    return n;
}
frac add(frac a[], int n)
{
    frac sum;
    int x;
    sum.n = a[0].n;
    sum.d = a[0].d;
    for (int i = 1; i < n; i++)
    {
        sum.n = (sum.n * a[i].d) + (a[i].n * sum.d);
        sum.d *= a[i].d;
    }
    for (int i = 1; i <= sum.n && i <= sum.d; i++)
    {
        if (sum.n % i == 0 && sum.d % i == 0)
            x = i;
    }
    sum.n /= x;
    sum.d /= x;
    return sum;
}
void disp(frac a[], frac b, int n)
{
    int i = 0;
    while (i < n - 1)
    {
        printf("%d/%d + ", a[i].n, a[i].d);
        i++;
    }
    printf("%d/%d = %d/%d\n", a[n - 1].n, a[n - 1].d, b.n, b.d);
}
int main()
{
    frac a[100], sum;
    int n = inputfrac(a);
    sum = add(a, n);
    disp(a, sum, n);
    return 0;
}
