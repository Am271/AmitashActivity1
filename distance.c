//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float dist(float x1, float x2, float y1, float y2)
{
return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
float getval()
{
float val;
printf("Enter coordinate: ");
scanf("%f",&val);
return val;
}
void disp(float d)
{
printf("The distance between the two points is %f\n");
}
int main()
{
float x1, x2, y1, y2, distance;
printf("Enter the x1, x2, y1 and y2 coordinates to calculate their distance\n");
x1 = getval();
x2 = getval();
y1 = getval();
y2 = getval();
distance = dist(x1, x2, y1, y2);
disp(distance);
return 0;
}
