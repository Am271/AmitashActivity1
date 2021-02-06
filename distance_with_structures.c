//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
typedef struct pair
{
int x;
int y;
}pair;
float dist(pair a, pair b)
{
return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}
pair getpair()
{
pair a;
printf("Enter a pair of coordinates(x and y): ");
scanf("%d%d",&a.x, &a.y);
return a;
}
void disp(float d)
{
printf("The distance between the two points is %f\n", d);
}
int main()
{
float distance;
pair a, b;
a = getpair();
b = getpair();
distance = dist(a, b);
disp(distance);
}
