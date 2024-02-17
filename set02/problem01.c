// 01.  Write a program to find the area of a triangle.

// ***Function Declarations***
// ```c
// void input(float *base, float *height);
// void find_area(float base , float height, float *area);
// void output(float base, float height, float area);
// ```

// ***Input***
// ```
// 1
// 2
// ```

// ***Output***
// ```
// The area of the traingle with base 1.000000 and height 2.000000 is 1.000000
// ```

// ---

/*

Meathod 1

#include <stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
    // Sumarising all the code
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}

void input(float *base, float *height)
{
    // Getting base of the triangle
    printf("Please enter the base");
    scanf("%f",base);

    // Getting height of the triangle
    printf("please enter the height");
    scanf("%f",height);
}

void find_area(float base, float height, float *area)
{
    // putting area of the triangke
    *area=(0.5*base*height);
}

void output(float base, float height, float area)
{
    // printing the area of the triangle
    printf("the area of triangle is %f",area);
}*/


//MEATHOD 2

#include <stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int  main()
{
    float base, height, area;
    input(& base, & height);
    find_area(base, height, & area);
    output(base, height, area);
    return 0;
}

void input(float *base, float *height)
{
    printf("Enter the base of the triangle \n");
    scanf("%f",base);

    printf("Enter the height of the triangle \n");
    scanf("%f",height);
}

void find_area(float base, float height, float *area)
{
    float a=base*height;
    *area=(0.5*a);
}

void output(float base, float height, float area)
{
    printf("The area of the triangle is %f",area);

}