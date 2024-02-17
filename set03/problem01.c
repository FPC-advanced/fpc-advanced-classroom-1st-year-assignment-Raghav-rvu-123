// 1. Write a program to find the distance between 2 points

// ***Function Declarations***
// ```c
// void input(float *x1, float *y1, float *x2, float *y2);
// float find_distance(float x1, float y1, float x2, float y2);
// void output(float x1, float y1, float x2, float y2, float distance);
// ```

// ***Input***
// ```
// 1 1
// 2 2
// ```

// ***Output***
// ```
// The distance between point (1.0000000, 1.0000000) and (2.0000000, 2.0000000) is 1.4142



#include <stdio.h>
#include<math.h>

void input(float *x1, float *x2, float *y1, float *y2);
float find_distance(float x1, float x2, float y1, float y2);
void output(float x1, float x2, float y1, float y2, float distance);

int main()
{
    float x1, x2, y1, y2, distance;
    input(&x1, &x2, &y1, &y2);
    distance=find_distance(x1, x2, y1, y2);
    output(x1,x2,y1,y2,distance);
    return 0;
}

void input(float *x1, float *x2, float *y1, float *y2)
{
    printf("Enter the value of x1 ");
    scanf("%f", x1);

    printf("Enter the value of x2 ");
    scanf("%f", x2);

    printf("Enter the value of y1 ");
    scanf("%f", y1);

    printf("Enter the value of y2 ");
    scanf("%f", y2);

}

float find_distance(float x1, float x2, float y1, float y2)
{
    float distance;
    float a= pow((x2-x1),2);
    float b= pow((y2-y1),2);
    distance= sqrt(a+b);
    return distance;
}

void output(float x1, float x2, float y1, float y2, float distance)
{
    printf("The distance between 2 proints is %f", distance);
}