// 06. Write a program to reverse a string.

// ***Function Declarations***
// ```c
// void input_string(char *a);
// void str_reverse(char *str, char *rev_str);
// void output(char *a, char *reverse_a);
// ```

// ***Input***
// ```
// hello
// ```

// ***Output***
// ```
// olleh
// ```

// ---


/* #include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char str[100],rev_str[100];
    input_string(str);
    str_reverse(str,rev_str);
    output(str,rev_str);
    return 0;
}

void input_string(char *a)
{
    printf("Please enter a string u want reversed: ");
    scanf("%s",a);
}

void str_reverse(char *str, char *rev_str)
{
    int length=strlen(str);

    for(int i=0;i<length;i++)
    {
       rev_str[i]=str[length-1-i];
    }
    rev_str[length]='\0';

}

void output(char *a, char *reverse_a)
{
    printf("The orignal string is %s\n",a);
    printf("The reversed string is %s",reverse_a);
} */

#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *rev_str);

int main()
{
    char a[100],reverse_str[100];
    input_string(a);
    str_reverse(a,reverse_str);
    output(a,reverse_str);
    return 0;

}

void input_string(char *a)
{
    printf("Enter a string that u want to reverse \n");
    scanf("%s",a);
}

void str_reverse(char *str, char *rev_str)
{
    int i,j;
    for(i=0; str[i]!='\0'; i++);
    i-=1;

    for( j=0; i>=0; i--,j++)
    {
        rev_str[j]=str[i];
    }
    rev_str[j]='\0';
}

void output(char *a, char *str_reverse)
{
    printf("The reversed string is %s",str_reverse);
}


/* //How to get the length of a string

#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string");
    scanf("%s",str);
 int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        count ++;

    }
    printf("%d",count);
}
*/