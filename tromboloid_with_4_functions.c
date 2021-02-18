#include <stdio.h>
float vol(float h, float b, float d);
float getv();
void input(float *h, float *d, float *b);
void disp(float vol);
int main()
{
    float h, d, b;
    input(&h, &d, &b);
    disp(vol(h, d, b));
    return 0;
}
float vol(float h, float d, float b)
{
    return ((h * d * b) + (d / b)) / 3;
}
void input(float *h, float *d, float *b)
{
    printf("Enter h, d and b values: ");
    *h = getv();
    *d = getv();
    *b = getv();
}
float getv()
{
    float val;
    scanf("%f", &val);
    return val;
}
void disp(float v)
{
    printf("The volume of the tromboloid is %f\n", v);
}
