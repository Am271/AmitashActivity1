//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
typedef struct pair
{
    float x;
    float y;
}pair;
float dist(pair a, pair b)
{
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}
pair getpair()
{
    pair a;
    printf("Enter a pair of coordinates(x and y): ");
    scanf("%f%f",&a.x, &a.y);
    return a;
}
void disp(float d, pair a, pair b)
{
    printf("The distance between the point1 x: %f, y: %f and point2 x: %f, y: %f is %f\n", a.x, a.y, b.x, b.y, d);
}
int main()
{
    float distance;
    pair a, b;
    a = getpair();
    b = getpair();
    distance = dist(a, b);
    disp(distance, a, b);
    return 0;
}
