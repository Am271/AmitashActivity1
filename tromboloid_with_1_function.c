#include <stdio.h>
void getvalues(float *h, float *d, float *b)
{
    printf("Enter the dimensions(h, d and b): ");
    scanf("%f%f%f", h, d, b);
}
void computevol(float h, float d, float b)
{
    float vol = ((h * d * b) + (d / b)) / 3;
    printf("The volume of the tromboloid is %f\n", vol);
}
int main()
{
    float h, d, b;
    getvalues(&h, &d, &b);
    computevol(h, d, b);
    return 0;
}
