//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
void getnum(int a[], int n)
{
    printf("Enter the numbers to be added: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int add(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
void getn(int *n)
{
    printf("How many numbers do you want to add? ");
    scanf("%d", n);
}
void disp(int a)
{
    printf("The sum of the entered numbers is %d\n", a);
}
int main()
{
    int n, sum;
    getn(&n);
    int a[n];
    getnum(a, n);
    sum = add(a, n);
    disp(sum);
    return 0;
}
