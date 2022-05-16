// ******************************** Assignment-7 (Day-8) Strings and Functions  ********************************
// Classroom exercises:
// TODO-1 Write a program Using recursion and addition operator to implement multiplication.
#include <stdio.h>
int multiplication(int, int);
int main()
{
    int m, n, product;
    printf("Enter multiplicand and multiplier: ");
    scanf("%d%d", &m, &n);
    // printf("multiplicand= %d and multiplier= %d", m, n);

    product = multiplication(m, n);
    printf("%d*%d= %d\n", m, n, product);
    return 0;
}
int multiplication(int m, int n)
{
    if (n == 1)
        return m;
    else
        return m + multiplication(m, n - 1);
}
// ToDo-2. Write a program to swap two numbers
#include <stdio.h>
void swap(int, int);
int main()
{
    int x, y;
    printf("Enter x and y two integer value: ");
    scanf("%d%d", &x, &y);
    // printf("multiplicand= %d and multiplier= %d", m, n);

    swap(x, y);
    return 0;
}
void swap(int num1, int num2)
{
    printf("(%d , %d) after swapping: ", num1, num2);
    int tmp = 0;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
    printf("(%d , %d)", num1, num2);
}
// TODO-3. Write a recursive function to find the sum of n integers.
#include <stdio.h>
int sum = 0;
int adder(int, int[]);
int main()
{
    int size, add;
    printf("Enter number of elements to add: ");
    scanf("%d", &size);
    int numbers[size];

    printf("Enter numbers to add: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }

    add = adder(size, numbers);
    printf("The sum of all numbers= %d\n", add);
    return 0;
}
int adder(int size, int numbers[])
{
    if (size == 0)
        return sum;
    else
        sum += numbers[--size];
    return adder(size, numbers);
}
// TODO-4 Write a c program to concatenate two strings without using library functions
#include <stdio.h>
// int sum = 0;
unsigned int strln(char[]);
void concatenate(char[], char[]);
int main()
{
    char str1[256], str2[256];
    printf("Enter a string: ");
    scanf("%[^\n]s", str1);
    printf("Enter another string: ");
    scanf(" %[^\n]s", str2);

    // printf("%u\n", strln(str1));
    // printf("%u\n", strln(str2));

    concatenate(str1, str2);
    return 0;
}
unsigned int strln(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
void concatenate(char str1[], char str2[])
{
    printf("str1: %s\n", str1);
    int size = strln(str1) + strln(str2);
    // printf("size]: %u\n", size);

    // char str[size] = '\0'; // error: variable-sized object may not be initialized
    char str[size];
    // printf("str[size]: %lu\n", sizeof str);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        str[i] = str1[i];
        // printf("str[%d]: %c\n", i, str[i]);
    }
    str[strln(str1)] = '\0';
    printf("The 1st string is: %s\n", str);

    for (int i = 0, j = strln(str); str[i] != '\0'; i++, j++)
    {
        str[j] = str2[i];
        printf("str[%d]: %c\n", i, str[i]);
    }
    printf("\nThe concatenated string is: %s\n", str);
}

// TODO-5 Write a c program to copy string without using library functions
#include <stdio.h>
// int sum = 0;
char *strcp(char[], char[]);
int main()
{
    char source[256], destination[256];
    printf("Enter source string: ");
    scanf("%[^\n]s", source);

    printf("String from destination: %s\n\n", strcp(destination, source));
    return 0;
}
char *strcp(char str1[], char str2[])
{
    printf("%s", str1);
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }

    return str1;
}

// TODO-6 Write a c program to find length of string without using library functions
#include <stdio.h>
// int sum = 0;
int strl(char[]);
int main()
{
    char str[256];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("The string's length is: %d\n", strl(str));
    return 0;
}
int strl(char str[])
{
    printf("%s", str);
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
