//*  ******************************** Assignment-8 (Day-9) Functions and Arrays *********************************

// TODO-1 Write a C program to calculate power a given number using pow(a,b) function in math.h
#include <stdio.h>
#include <math.h>
int main()
{
    float base, exponent;
    printf("Enter the base number: ");
    scanf("%f", &base);
    printf("Enter the exponent: ");
    scanf("%f", &exponent);

    printf("pow(%g, %g)= %f\n", base, exponent, pow(base, exponent));
    return 0;
}
// TODO-2 Write a program and implement a function to find if it is leap year or not.
#include <stdio.h>
void is_leap(int);
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    is_leap(year);
    return 0;
}

void is_leap(int year)
{
    int flag = 0;

    if (year % 4 == 0) // general leap year condition
    {
        if (year % 100 != 0) // checking if its a century if not then only general condition will apply
            flag = 1;
        else if (year % 100 == 0 && year % 400 == 0) // necessary condition for a century
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        printf("%d is a leap year.\n", year);
    else
        printf("%d isn't a leap year.\n", year);
}
// TODO-3 Write a program and implement a factorial function using below prototype declarations:
// long int factorial(long int);
#include <stdio.h>
long int factorial(long int);
int main()
{
    long int num;
    printf("Enter a number: ");
    scanf("%ld", &num);

    printf("factorial(%ld)= %ld\n", num, factorial(num));
    return 0;
}
long int factorial(long int num)
{
    long int fact = 1;
    if (num == 0)
        fact = 1;
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
    }

    return fact;
}

// TODO-4  Implement average function of two numbers as below:
// double average(double, double);
#include <stdio.h>
double average(double, double);
int main()
{
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("average(%g, %g)= %.2f\n", num1, num2, average(num1, num2));
    return 0;
}
double average(double a, double b)
{
    double avg = 0;

    avg = (a + b) / 2;
    return avg;
}

// TODO-5 Write a program to use exp function from math.h
#include <stdio.h>
#include <math.h>
int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("exp(%g)= %lf\n", num, exp(num));
    return 0;
}

// TODO-6 Write a program to print all the locations at which a particular element (taken as input) is found in
// a array and also print the total number of times it occurs in the array. The location starts from 1.
#include <stdio.h>
unsigned int findElement(int, int[], int);
int main()
{
    int size, num;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter an element to find: ");
    scanf("%d", &num);

    printf("\n%d is present in the array %u times.\n", num, findElement(size, arr, num));
    return 0;
}
unsigned int findElement(int size, int arr[], int num)
{
    int count = 0;
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            printf("%d is present at location: %d\n", num, i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d isn't present in the array.\n", num);
    }
    return count;
}
// TODO-7 Write a C program to search a given element from a 1D array and display the position at which it is
// found by using linear search function. The index location starts from 1.
#include <stdio.h>
void findElement(int, int[], int);
int main()
{
    int size, num;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter an element to search: ");
    scanf("%d", &num);

    findElement(size, arr, num);
    return 0;
}
// if same element will be present many times then it will give the last occurance of the element.
void findElement(int size, int arr[], int num)
{
    int result = -1;
    printf("\n");
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] == num)
            result = i;
    }
    (result == -1) ? printf("%d is not present in the array.\n", num) : printf("%d is present at location: %d\n", num, result);
    // if (result == -1)
    //     printf("%d is not present in the array.\n", num);
    // else
    //     printf("%d is present at location: %d\n", num, result);
}

// TODO-8 Write a C program to reverse an array by using another new array.
#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int arr1[size];
    printf("\n[\t");
    for (int i = size - 1, j = 0; i >= 0 && j < size; i--, j++)
    {
        arr1[j] = arr[i];
        printf("%d\t", arr1[j]);
    }
    printf("]\n\n");
    return 0;
}

// TODO-9 Write a C program to reverse an array by swapping the elements and without using any new array.
#include <stdio.h>
void swap(int, int[]);
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    swap(size, arr);
    return 0;
}
void swap(int size, int arr[])
{
    int tmp;
    for (int i = 0, j = size - 1; i < size / 2 && j >= 0; i++, j--)
    {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    printf("\nReversed array: [\t");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("]\n\n");
}