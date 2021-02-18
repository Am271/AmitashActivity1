//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>
float dist(float x1, float x2, float y1, float y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
void disp(float d)
{
    printf("The distance between the two points is %f\n", d);
}
void getval(float *x1, float *x2, float *y1, float *y2)
{
    printf("Enter the first pair of coordinates(x and y): ");
    scanf("%f%f", x1, y1);
    printf("Enter the second pair of coordinates(x and y): ");
    scanf("%f%f", x2, y2);
}
int main()
{
    float x1, x2, y1, y2, distance;
    getval(&x1, &x2, &y1, &y2);
    distance = dist(x1, x2, y1, y2);
    disp(distance);
    return 0;
}
