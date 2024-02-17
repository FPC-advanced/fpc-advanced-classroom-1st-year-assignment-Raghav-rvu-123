// 10. Write a C program to compare two strings, character by character.

// > For example, `Hello` should be equal to `Hello`, but not equal to `hello`.

// > `Hello` will be lesser than `Hellw` (alphabetical order).

// ***Function Declarations***

// ```c
// void input_two_strings(char *string1, char *string2);
// int stringcompare(char *string1, char *string2);
// void output(char *string1, char *string2, int result);
// ```

// ***Input***
// ```
// Enter the first string: hello
// Enter the second string: world
// ```

// ***Output***
// ```
// world is greater than hello
// ```

// ---


/*

//MEATHOD 1

#include <stdio.h>

void input_two_strings(char *str1, char *str2);
int stringcompare(char *str1, char *str2);
void output(char *str1, char *str2, int result);

int main()
{
    char a[100],b[100];
    input_two_strings(a,b);
    int result=stringcompare(a,b);
    output(a,b,result);
}

void input_two_strings(char *str1,char *str2)
{
    printf("please enter string 1");
    scanf("%s",str1);

    printf("Please enter the value of string 2");
    scanf("%s",str2);
}

int stringcompare(char *str1, char *str2)
{
    for(int i=0;str1[i]!=str2[i]; i++)
    {
        return str1[i]-str2[i];
    }
}

void output(char *str1, char *str2, int result)
{
    if(result>0)
    {
        printf("%s is greater",str1);
    }
    else
    {
        printf("%s is greater",str2);
    }
}*/


// MEATHOD 2

#include <stdio.h>

void input_two_strings(char *str1, char *str2);
int stringcompare(char *str1, char *str2);
void output(char *str1, char *str2, int result);

int main()
{
    char str1[100],str2[100];
    int result;
    input_two_strings(str1,str2);
    result=stringcompare(str1,str2);
    output(str1, str2, result);
    return 0;
}

void input_two_strings(char *str1, char *str2)
{
    printf("Enter the value of string 1");
    scanf("%S",str1);

    printf("Enter the value of string 2");
    scanf("%s",str2);
}

int stringcompare(char *str1, char *str2)
{
    int i;
    for(i=0; str1[i]!='\0' && str2[i]!='\0' && str1[i]==str2[i]; i++)
    {
        continue;
    }
      return str1[i]-str2[i];    
}

void output(char *str1, char *str2, int result)
{
    if(result>0)
    {
        printf("%s is greater",str1);
    }
    if(result <0)
    {
        printf("%s is is greater",str2);
    }
    else 
    {
        printf("both are equal");
    }
}
