// 4. Write a C program to add two numbers using **pass by reference**

// ***Function Declarations***

// ```c
// void input(int *a, int *b);
// void add(int a, int b, int *sum);
// void output(int a, int b, int sum);
// ```

// ***Input***

// ```
// 1
// 2
// ```

// ***Output***

// ```
// The sum of 1 and 2 is 3
// ```

// ---

#include <stdio.h>

int input();
void add(int a, int b, int *sum);
void output(int sum);

int main()
{
    int a=input();
    int b=input();
    int sum=0;
    add(a,b,&sum);
    output(sum);
    return 0;

}

int input()
{
    int x;
    printf("enter the value");
    scanf("%d",&x);
    return x;

}

void add(int a, int b, int *sum)
{
    *sum=a+b;
}

void output(int sum)
{
    printf("the sum of a and b is %d", sum);

}