//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
double vol(float h, float b, float d)
{
  double m = h*d*b;
  double db = d/b;
  return (1/3)*(m + db);
}
int main()
{
  float h, b, d;
  printf("Enter the dimensions(h, d and b): ");
  scanf("%f%f%f",&h,&d,&b);
  printf("The volume of the tromboloid is %lf\n",vol(h, b, d));
  return 0;
}
