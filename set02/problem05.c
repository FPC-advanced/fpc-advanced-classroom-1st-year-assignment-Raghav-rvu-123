// 05.  Write a program to find GCD _(HCF)_ of two numbers.

// ***Function Declarations***
// ```c
// int input();
// int find_gcd(int a, int b);
// void output(int a, int b, int gcd);
// ```

// ***Input***
// ```
// 12
// 16
// ```

// ***Output***
// ```
// 4
// ```

// ---


 /* #include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a, b, gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}

int input()
{
    int n;
    printf("Please enter a number");
    scanf("%d",&n);
    return n;
}

int find_gcd(int a, int b)
{
    int hcf=1;
    for(int i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    return hcf;

}

void output(int a, int b, int gcd)
{
    printf("The hcf of a %d and b %d is %d",a,b,gcd);
} */

#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a, b, gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}

int input()
{
    int n;
    printf("Please enter a number");
    scanf("%d",&n);
    return n;
}

int find_gcd(int a, int b)
{
    int c=a%b;
    if(c!=0)
    {
        find_gcd(b,c);
    }
    else
    {
        return b;
    }
}

void output(int a, int b, int gcd)
{
    printf("The hcf of a %d and b %d is %d",a,b,gcd);
}