//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
float vol(float h, float b, float d)
{
return ((h*d*b) + (d/b))/3;
}
int main()
{
float h, b, d;
printf("Enter the dimensions(h, d and b): ");
scanf("%f%f%f",&h,&d,&b);
printf("The volume of the tromboloid is %f\n",vol(h, b, d));
return 0;
}
