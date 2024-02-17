// 9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

// ***Function Declarations***
// ```c
// float input();
// float square_root(float n);
// void output(float n, float sqrroot);
// ```

// ***Input***
// ```
// Enter number: 49
// ```

// ***Output***
// ```
// Square root of 49.0 is 7.0
// ```

// ---


/* #include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float n=input();
    float sqrroot=square_root( n);
    output(n,sqrroot);
    return 0;
}

float input()
{
    float x;
    printf("Please Enter The Number U Want Square Root Off \n");
    scanf("%f",&x);
    return x;
}

float square_root(float n)
{
    float i;
    for ( i=1.414;i*i<n;i+=0.0001);
    return i;
}

void output(float n, float sqrroot)
{
    printf("The Square Root is %2f",sqrroot);
} */





#include <stdio.h>

float input();
float square_root(float n);
void output(float sqrt);

int main()
{
    float n, sqrt;
    n=input();
    sqrt=square_root(n);
    output(sqrt);
}

float input()
{
    float x;
    printf("Enter the number:   ");
    scanf("%f",&x);
    return x;
}

float square_root(float n)
{
    float x, y, e=0.000001;
    x=n;
    y=1;
    while (x-y>e)
    {
       x=(x+y)/2;
       y=n/x;
    }
    return x;

}

void output(float sqrt)
{
    printf("The square root of the numbr is %.2f",sqrt);
    
}


