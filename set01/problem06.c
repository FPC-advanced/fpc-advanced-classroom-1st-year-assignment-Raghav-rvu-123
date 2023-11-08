// 6. Write a C program to compare three numbers using **pass by reference**

// ***Function Declarations***

// ```c
// int input(int *a, int *b, int *c);
// void compare(int a, int b, int c, int *largest);
// void output(int a, int b, int c, int largest);
// ```

// ***Input***

// ```
// 1
// 1
// 0
// ```

// ***Output***

// ```
// 1
// ```

// ---

#include <stdio.h>

void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int largest);

int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(largest);
}

void input(int *a, int *b, int *c)
{
  printf("Enter the value of a : \n");
  scanf("%d",a);
  printf("ENter the value of b : \n");
  scanf("%d",b);
  printf("ENter the value of c : \n");
  scanf("%d",c);
}

void compare(int a, int b, int c, int *largest)
{
    if(a>=b && a>=c)
    {
        *largest=a;
    }

    if(b>=a && b>=c)
    {
        *largest=b;
    }

    else
    {
        *largest=c;
    }

}

void output(int largest)
{
    printf("the largest of all numbers is %d",largest);
}