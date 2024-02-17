// 3. Write a program to check if the given number is prime

// ***Function Declarations***
// ```c
// int input_number();
// int is_prime(int n);
// void output(int n, int result);
// ```

// ***Input***
// ```
// 3
// ```

// ***Output***
// ```
// 3 is a prime number
// ```

// //






/*  #include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
    int n, result;
    n=input_number();
    result=is_prime( n);
    output( n,  result);
    return 0;
}

int input_number()
{
    int n;
    printf("enter any number to check if its a prime number");
    scanf("%d",&n);
    return n;
}

int is_prime(int n)
{
    int count=0;
     for(int i=1;i<=n/2 ; i++)
    {
        if(n%i==0)
        {
          count++;  
        }        
    }
    return count;
}

void output(int n, int result)
{
    if(result==1)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is a composite number");
    }

} */



#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
    int n, result;
    n=input_number();
    result=is_prime(n);
    output(n,result);
    return 0;
}

int input_number()
{
    int x;
    printf("Enter a number   ");
    scanf("%d",&x);
    return x;
}

int is_prime(int n)
{
    // int count=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)  
        {
            return 0;
        }
    }
    return 1;
    // return count++;
}

void output(int n, int result)
{
    if(result!=0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is composite");
    }

} 