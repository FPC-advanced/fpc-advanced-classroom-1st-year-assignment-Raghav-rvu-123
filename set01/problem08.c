// 8. Write a C program to find sum of _n_ different numbers entered by the user.

// ***Function Declarations***

// ```c
// int input_array_size();
// void input_array(int n, int a[n]);
// int sum_n_array(int n, int a[n]);
// void output(int n, int a[n],int sum);
// ```

// ***Input***
// ```
// Input array size: 3
// Input the array:
// 1 7 11
// ```

// ***Output***
// ```
// 1+7+11 is 19
// ```

// ---


#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main()
{
    int n;
    n=input_array_size();
    int a[n];
    input_array( n, a);
    int sum=sum_n_array(n, a);
    output( n,  a, sum);
}

int input_array_size()
{
    int n;
    printf("please enter the size of array");
    sscanf("%d",n);
    return n;
}

void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Please enter Numbers \n");
        scanf("%d",a[i]);
    }
}

int sum_n_array(int n, int a[n])
{
    int sum;
    for(int i=0;i<a[n];i++)
    {
        sum=sum+a[n];
    }
    return sum;
}

void output(int n, int a[n],int sum)
{
    printf("The sum of array is \n",sum);    
}