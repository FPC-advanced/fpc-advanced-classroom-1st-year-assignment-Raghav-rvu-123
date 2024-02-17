// // 11. Write a C program to find the sum of 2 complex numbers

// // ***Function Declarations***
// // ```c
// // struct _complex {
// // 	float real;
// // 	float imaginary;
// // }
// // typedef struct _complex Complex;

// // Complex input_complex();
// // Complex add_complex(Complex a, Complex b);
// // void output(Complex a, Complex b, Complex sum);
// // ```

// // ***Input***
// // ```
// // 2 3
// // 4 5
// // ```

// #include <stdio.h>

// //making a structure
// struct complex
// {
//    float real;
//    float imag;
// };
// //giving structure a simple name
// typedef struct  complex comp;

// int main()
// {
//     // comp is a new data type; c1 and c2 are two variables
//     comp c1,c2,sum;

//     //getting input for real number 1
//     printf("Enter real number 1 \n");
//     scanf("%f",&c1.real);

//     //getting input for imaginary number 1
//     printf("Enter imaginary number 1 \n");
//     scanf("%f",&c1.imag);

//     //getting input for real number 2
//     printf("Enter the second real number \n");
//     scanf("%f",&c2.real);

//     //getting input for imaginary number 2
//     printf("Enter the imaginary number 2 \n");
//     scanf("%f",&c2.imag);

//     //adding the two real number
//     sum.real=c1.real+c2.real;
//     printf("the sum of two real number is %f \n",sum.real);

//     //adding the two imaginary number
//     sum.imag=c1.imag+c2.imag;
//     printf("the sum of two imaginary number is \n",sum.imag);

//     // output of sum of two complex numbers
//     printf("the sum is %f + %f i \n",sum.real,sum.imag);
// }


#include<stdio.h> // standard input and output

struct compare // creating a structure NAMED compare
{
   float imag;
   float real;
};
typedef struct compare c; // giving it a simple name c (c is a new datatype)

c input_complex();
c add_complex(c a, c b);
void output(c a, c b, c sum);

int main() // where code gets summarised
{
    c a,b,sum;
    a=input_complex();
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}

c input_complex() // coding print and scan statement for multiple variables
{
    c x;
    printf("Enter the real number");
    scanf("%f",&x.real);

    printf("Enter the imaginary number");
    scanf("%f",&x.imag);

    return x;
}

c add_complex(c a, c b) // Simply adding both a,b real and a,b imaginary numbers
{
    c sum;
    sum.real=a.real+b.real;
    sum.imag=a.imag+b.imag;
    return sum;
}

void output(c a, c b, c sum) // finally printing the sum of real and imaginary number
{
    printf("The sum of complex number is (%f + %fi)", sum.real, sum.imag);
}
