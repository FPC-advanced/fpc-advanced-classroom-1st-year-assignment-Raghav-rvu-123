// 07. Write a program to find the area of a triangle.

// ***Function Declarations***
// ```c
// typedef struct _triangle {
// 	float base, altitude, area;
// } Triangle;

// Triangle input_triangle();
// void find_area(Traingle *t);
// void output(Triangle t);
// ```

// ***Input***
// ```
// 2
// 3
// ```

// ***Output***
// ```
// The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000
// ```

// ---



#include <stdio.h>

 typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
    Triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}

Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base of the triangle ");
    scanf("%f",&t.base);

    printf("Enter the altitude of the triangle ");
    scanf("%f",&t.altitude);
    return t;
}

void find_area(Triangle *t)
{
    t->area = 0.5 * t->base * t->altitude;
}

void output(Triangle t)
{
    printf("The triangle whoes:\n Base= %.2f\n  Altitude= %.2f \n Area= %.2f",t.base,t.altitude,t.area);
}