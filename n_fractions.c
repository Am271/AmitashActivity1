//WAP to find the sum of n fractions.
#include<stdio.h>
typedef struct fraction
{
int n;
int d;
}frac;
frac getfrac()
{
frac a;
printf("Enter numerator followed by the denominator: ");
scanf("%d%d", &a.n, &a.d);
return a;
}
void add(frac a[], int n)
{
frac sum; int x;
sum.n = a[0].n;
sum.d = a[0].d;
for(int i=1;i<n;i++)
{
sum.n = (sum.n * a[i].d) + (a[i].n * sum.d);
sum.d *= a[i].d;
}
for(int i=1;i <= sum.n && i <= sum.d;i++)
{
if(sum.n % i == 0 && sum.d % i == 0)
x = i;
}
sum.n /= x;
sum.d /= x;
printf("The sum of the fractions is %d/%d\n", sum.n, sum.d);
}
int main()
{
int n; frac sum;
printf("Enter number of fractions: ");
scanf("%d", &n);
frac a[n];
for(int i=0;i<n;i++)
{
a[i] = getfrac();
}
add(a, n);
return 0;
}
