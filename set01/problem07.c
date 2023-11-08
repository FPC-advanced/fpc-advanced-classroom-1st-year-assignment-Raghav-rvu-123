// 7. Write a C program to find sum of all natural numbers until _n_

// ***Function Declarations***

// ```c
// int input_n();
// int sum_n_nos(int n);
// void output(int n, int sum);
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
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
    int n=input();
    int sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}

int input()
{
    int n;
    printf("enter the number of number");
    scanf("%d",&n);
    return n;
}

int sum_n_nos(int n)
{
    int sum=0;
    for(int i=0; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}

void output(int n, int sum)
{
    printf("the sum of n numbers is %d \n",sum);
}