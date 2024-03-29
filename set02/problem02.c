// 02.  Write a program to find if a triangle is scalene.

// > A triangle is scalene if all the three sides of the triangle are not equal to one another

// ***Function Declarations***
// ```c
// int input_side();
// int check_scalene(int a, int b, int c);
// void output(int a, int b, int c, int isscalene);
// ```

// ***Input***
// ```
// 5
// 4
// 5
// ```

// ***Output***
// ```
// The triangle with sides 5, 4 and 5 is not scalene
// ```

// ---


/*#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a,b,c;
    int isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}

int input_side()
{
    int x;
    printf("Enter a value");
    scanf("%d",&x);
    return x;    
}

int check_scalene(int a, int b, int c)
{
    if(a!=b || a!=c || b!=c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void output(int a, int b, int c,  int isscalene)
{
    if(isscalene=0)
    {
        printf("This Triangle is scalene");
    }

    else
    {
        printf("This Triangle is not scalene");
    }

}*/

#include<stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a, b, c, isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}

int input_side()
{
    int x;
    printf("Enter the value \n");
    scanf("%d",&x);
    return x;
}

int check_scalene(int a, int b, int c)
{
    if(a!=b && b!=c && c!=a)
    {
        return 1;
    }    
    else
    {
        return 0;
    }
}

void output(int a, int b, int c, int isscalene)
{
    if(isscalene = 1)
    {
        printf("The triangle is scalene");
    }

    else
    {
        printf("The triangle is not scalene");
    }

}