// 2. Write a program to find whether the given 3 points form a triangle

// ***Function Declarations***
// ```c
// void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
// int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
// void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
// ```

// ***Input***
// ```
// 1 1
// 0 0
// 1 1
// ```

// ***Output***
// ```
// The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle
// ```

// ---

#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, float result);

int main()
{
    float x1,x2,x3,y1,y2,y3, result;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result=is_triangle(x1, x2, x3, y1, y2, y3);
    output(x1, x2, x3, y1, y2, y3, result);
    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter x1: \n");
  scanf("%f", x1);

   printf("Enter y1: \n");
  scanf("%f", y1);

  printf("Enter x2: \n");
  scanf("%f", x2);

  printf("Enter y2: \n");
  scanf("%f", y2);

  printf("Enter x3: \n");
  scanf("%f", x3);

 
  printf("Enter y3: \n");
  scanf("%f", y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float d1, d2, d3, a,b,c,d,e,f;
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    c=pow((x3-x2),2);
    d=pow((y3-y2),2);
    e=pow((x3-x1),2);
    f=pow((y3-y1),2);

    d1=sqrt(a+b);
    d2=sqrt(c+d);
    d3=sqrt(e+f);

    if((d1+d2>d3) && (d2+d3>d1) && (d3+d1>d2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, float result)
{
    if(result==1)
    {
        printf("Its a triangle");
    }
    else
    {
        printf("its not a triangle");
    }

}