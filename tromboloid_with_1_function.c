#include<stdio.h>
int main()
{
float h, b, d, vol;
printf("Enter the dimensions(h, d and b): ");
scanf("%f%f%f",&h,&d,&b);
vol = ((h*d*b) + (d/b))/3;
printf("The volume of the tromboloid is %f\n",vol);
return 0;
}
