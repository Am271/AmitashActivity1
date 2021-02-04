//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int gete();
int sum(int a, int b);
void disp(int x);
int main()
{
        int x, y;
        x = gete();
        y = gete();
        disp(sum(x, y));
        return 0;
}
int gete()
{
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        return a;
}
int sum(int a, int b)
{
        return a + b;
}
void disp(int x)
{
        printf("The sum is %d\n", x);
}
