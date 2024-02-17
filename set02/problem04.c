// 04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

// ***Function Declarations***
// ```c
// int input_array_size();
// void input_array(int n, int a[n]);
// int sum_composite_numbers(int n, int a[n]);
// void output(int sum);
// ```

// ***Input***
// ```
// 1 2 7 8 12
// ```

// ***Output***
// ```
// 2o
// ```

// ---

/* #include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    int sum=0;
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Please enter the size of the array \n");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{    
    for(int i=0; i<n; i++)
    {
        printf("Enter the number u want \n");
        scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                sum+=a[i];
                break;
            }
        }
    }
    return sum;
}

void output(int sum)
{
    printf("The sum of all composite numbers u entered is %d \n",sum);
} */





#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n, a[n], sum=0;

    n=input_array_size();
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);

    return 0;
}

int input_array_size()
{
    int x;
    printf("How many numbers u want !!!  ");
    scanf("%d",&x);
    return x;
}

void input_array(int n, int a[n])
{
    int b;
    for(int i=0; i<n; i++)
    {
        printf("Enter the number %d",b+1);
        scanf("%d",a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            for(int j=0; j<=i; j++)
            {
                sum+=i;
            }
            printf("the factors are %d \n",i);
        }
    }
    return sum;
}

void output(int sum)
{
    printf("The sum is %d",sum);
}
