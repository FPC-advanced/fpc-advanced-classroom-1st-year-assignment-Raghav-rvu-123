// 5. Write a C program to compare three numbers using **pass by value**

// ***Function Declarations***

// ```c
// int input();
// int compare(int a, int b, int c);
// void output(int a, int b, int c, int largest);
// ```

// ***Input***

// ```
// 1
// 2
// 3
// ```

// ***Output***

// ```
// The largest of 1,2 and 3 is 3.
// ```


// ---

#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
    int a=input();
    int b=input();
    int c= input();
    int largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}

int input()
{
    int x; 
    printf("Please enter the value");
    scanf("%d",&x);
    return x;
}

int compare(int a,int b, int c)
{
    int largest;
    if(a>=b && a>=c )
    {
        largest=a;
    }

    else if(b>=a && b>=c)
    {
        largest=b;
    }

    else
    {
        largest=c;
    }
    return largest;
}

void output(int a,int b, int c,int largest)
{
    printf("the largest between a%d ,b%d ,c%d is %d", a,b,c,largest);
}
