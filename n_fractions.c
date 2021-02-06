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
frac add(frac a[], int n)
{
frac sum; int x;
sum.n = sum.d = 0;
for(int i=0;i<n-1;i++)
{
sum.n += (a[i].n * a[i+1].d) + (a[i+1].n * a[i].d);
sum.d += a[i].d * a[i+1].d;
}
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
return sum;
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
sum = add(a, n);
printf("The sum of the fractions is %d/%d\n", sum.n, sum.d);
return 0;
}
