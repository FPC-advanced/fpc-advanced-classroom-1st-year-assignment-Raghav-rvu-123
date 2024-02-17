// 12. Write a C program to find the sum of _n_ complex numbers

// ***Function Declarations***
// ```c
// struct _complex {
// 	float real,imaginary;
// };
// typedef struct _complex Complex;

// int get_n();
// Complex input_complex();
// void input_n_complex(int n, Complex c[n]);
// Complex add(Complex a, Complex b);
// Complex add_n_complex(int n, Complex c[n]);
// void output(int n, Complex c[n], Complex result);
// ```

// ***Input***
//  ```
// Enter the number of arrays: 3
// 2 3
// 4 5
// 6 7
// ```
// ***Output***
// ```
// 2+3i + 4+5i + 6+7i is 12+15i
// ```

#include <stdio.h>

struct complex // making a structur of imaginary anf real numbers
{
   float real;
   float img;
};
typedef struct complex c; //giving structure a simple name c

int get_n();
c input_complex_numbers();
void input_n_complex(int n, c com[n]);
c add(c a, c b);
c add_n_complex(int n, c com[n]);
void output(int n, c com[n], c result);

int main() // where the code summarises
{
    int n;
    c sum;
    n = get_n();
    c com[n];
    input_n_complex(n, com);
    sum = add_n_complex(n,com);
    output(n,com,sum);
}
int get_n()
{
    int n;
    printf("Please enter how many elements thee wish to input: \n");
    scanf("%i",&n);
    return n;
}

c input_complex_number() //inputing complex numbers
{
   c x;
   printf("Enter the real part of the number: \n");
   scanf("%f",&x.real);
   printf("Enter the img part of the number: \n");
   scanf("%f",&x.img);
   return x;
}

void input_n_complex(int n, c com[n])
{
    for(int i=0;i<n;i++)
    {
        com[i] = input_complex_number();
    }
}

c add(c a, c b)
{
    c sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    return sum;
}

c add_n_complex(int n, c com[n])
{
    c sum = {0,0};
    for(int i=0;i<n;i++)
    {
        sum = add(sum , com[i]);
    }
    return sum;
}

void output(int n, c com[n], c result)
{
    printf("The sum of all the array elements is: (%f +%fi) ",result.real,result.img);
}



