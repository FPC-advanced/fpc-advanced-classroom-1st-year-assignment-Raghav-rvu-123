// 03.  Write a program find whether a number is a composite number

// > A Composite number has more than 2 factors.

// ***Function Declarations***
// ```c
// int input_number();
// int is_composite(int n);
// void output(int n, int result);
// ```

// ***Input***
// ```
// 8
// ```

// ***Output***
// ```
// 8 is a composite number.
// ```

// ---

/* #include <stdio.h>

// declaring all the functions
int input_number();
int composite(int n);
void output(int n, int result);

int main()
{
    //summerising all the code in int main
    int n,result;
    n=input_number();
    result=composite(n);
    output(n,result);
    return 0;
}

int input_number()
{
    // taking the number the user wants to check if its a composite number or no
    int n;
    printf("Please ente rthe number to check wheather its a composite number or not");
    scanf("%d",&n);
    return n;
}

int composite(int n)
{
    // for int i=2 cause anything devided by one will give remainder zero (basically one factor) and composite number is the one with 2 or more factors
    //i<n/2 cause if we take the n as 50 then each number(i) till 49 will be devided to 50 so we devide it by two cause 50 cannot be devided by any number above 25 so makes the code faster
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        // n%i=0 means its got a factor
        {
            return 1;
        }
        else
        // if we dont get n%i=0 the its not devisible and so it goes to the next number to check if it id devisible 
        {
            // continue is for to check till i<n 
            continue;
        }
    }

}

void output(int n, int result)
{
    // getting output
    if(result==1)
    {
        printf("Its a composite number");
    }
    else
    {
        printf("Its not a composite number");
    }
} */


/* // MEATHOD 2

#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n, result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}

int input_number()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    return x;
}

int is_composite(int n)
{
    int i,count = 0;
    if(n<=1)
    {
        return 3;
    }
    else
    {
        for(i=1; i<=n/2; i++)
        {
            if(n%i==0)
            {
                count++;
            }
            else{
                continue;
            }
            
        }
    return count;
    }
}

void output(int n, int result)
{
    if(result>=2)
    {
        printf("the number is composite ");
    }
    else
    {
        printf("the number is not composite");
    }
}*/

// MEATHOD 3
#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n, result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}

int input_number()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    return x;
}

int is_composite(int n)
{
    int i, count=0;
    for(i=0; n%i==0; i++)
    {
        count++;
        continue;
    }
    return count;
}
void output(int n, int result)
{
    if(result>=2)
    {
        printf("the number is composite ");
    }
    else
    {
        printf("the number is not composite");
    }
}