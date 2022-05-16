//***************************************    Assignment-4 (Day-5)   ***************************************

// TODO write a c-program to find the smallest number among Three Numbers (integer values) using Nested if-else statement.
#include <stdio.h>
int main()
{
    int x, y, z; // declared variables
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z); // took inputs from user

    // First checking if x<y? and if yes then x<z? if yes then x would be the smallest otherwise z.
    if (x < y)
    {
        if (x < z)
            printf("%d is the smallest number.", x);
        else
            printf("%d is the smallest number: ", z);
    }
    // If first condition isn't true means y<x then checking if y<z if yes then y would be the smallest
    // otherwise goes to else statement and will print z is the smallest.
    else if (y < z)
        printf("%d is the smallest number.", y);
    else
        printf("%d is the smallest number.", z);

    return 0;
}

// TODO Write a program to find the factorial of a given number using while loop 5! = 5*4*3*2*1 6! = 6*5*4*3*2*1 0!=1 1!=1 -5!=1 -10!=1
#include <stdio.h>
int main()
{
    int n, f = 1, i = 1; // declared n and initialized f and i as required for program
    printf("Enter a number: ");
    scanf("%d", &n); // took input from user

    // To find the factorial using while loop multipied f by i. as i<=n the loop will run n times and will do f*i
    while (i <= n)
    {
        f = f * i;
        i += 1; // incrementing i after each loop
    }
    printf("The factorial of %d is: %d\n", n, f); // printing the final factorial

    return 0;
}

// TODO Write a C Program to find the Smallest Integer among Three integers using IF and Logical && operator.
#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter three numbers seperated by space: ");
    scanf("%d %d %d", &i, &j, &k); // took three numbers from user

    // checking if i is less than j and k if yes then it i will be smallest otherwise control goes to
    // else statement and check if j<k if yes then will print j is smallest otherwise k would be the smallest.
    if (i < j && i < k)
    {
        printf("%d is the smallest number", i);
    }
    else
    {
        if (j < k)
            printf("%d is the smallest number", j);
        else

            printf("%d is the smallest number", k);
    }
    return 0;
}

// TODO Write a C program to find power of a number using while loops. The base number (>0) and exponent (>=0) is taken from the test cases.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int base, exp, result = 1; // declaring base and exp and initializing result variable

    printf("Enter base number: ");
    scanf("%d", &base);
    if (base == 0) // if user will input 0 then will print The base value can't be zero! and program will exit.
    {
        printf("The base value can't be zero!\n");
        exit(0); // The library function void exit(int status) terminates the calling process immediately.
    }

    printf("Enter exponent: ");
    scanf("%d", &exp); // will take exponent from user

    // multipling result * base until exp=1, exp will become 0 and loop will stop executing.
    // This way I'm calculating base * base * base... until the loop goes.
    while (exp != 0)
    {
        result *= base;
        exp -= 1;
    }
    printf("%d \n", result);

    return 0;
}
// TODO Write a c-program to calculate the sum of first and the Last Digit of a given Number. For example if the number is 1234 the result is 1+4=5.
#include <stdio.h>
int main()
{
    int n, sum = 0, first_digit, last_digit;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    // To find last digit of a number used modulo operator that gives remainder.
    last_digit = n % 10;
    // Find the first digit by dividing n by 10 until n greater then 10
    while (n >= 10)
    {
        n = n / 10; // while no > 10 keep dividing by 10. this way we get the first digit.
        // printf("%d\n", n);
    }
    first_digit = n;
    // Calculate sum of first and last digit
    sum = first_digit + last_digit;
    printf("Sum of first and last digit = %d\n", sum);
    // !note : if we take number as 01234 it will not consider 0 as first digit as it will 1234 as int
    // !note: if we initialize var with 0123 or anything starting with 0 it will be treated as octal value

    return 0;
}
// TODO Write a C program to count total number of digits of an Integer number (n).
#include <stdio.h>
int main()
{
    int n, count = 0; // declared n and initialized count
    printf("Enter a number: ");
    scanf("%d", &n); // taking input from user

    // dividing by 10 and counting this way we can calculate no. of digits.
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("%d\n", count); // printing the total count that will total no. of digits in the number.
    return 0;
}
// TODO Write a C program to check whether the given number(n) can be expressed as Power of Two (2) or not. For example 8 can be expressed as 2^3.
#include <stdio.h>
int main()
{
    int n, tmp; // declaring variables
    printf("Enter the number: ");
    scanf("%d", &n); // taking inputs
    tmp = n;
    if (tmp == 0) // checking if tmp is 0 if so can't expressed as power of 2 otherwise goes to else
    {
        printf("0 can't be expressed as power of 2.\n");
    }
    else
    {

        while (tmp != 1)
        {
            if (tmp % 2 != 0) // checking if the no. is odd if so skip otherwise goes to else
                break;
            else
            {
                tmp = tmp / 2; // divide the no. by 2 untill the loop runs or val of tmp becomes 1.
                printf("%d\n", tmp);
            }
        }
        if (tmp == 1) // if value of tmp euals to 1 prints the number can be expressed as power of 2 otherwise it can't.
            printf("%d can be expressed as power of 2.", n);
        else
            printf("%d can't be expressed as power of 2.", n);
    }

    return 0;
}

// TODO Write a C program to find sum of following series where the value of n is taken as input: 1+1/2+1/3+1/4+1/5+.. 1/n
#include <stdio.h>
int main()
{
    int n;
    float result = 0;
    printf("Enter a number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += 1.0 / i;
    }
    printf("sum : %.2f", result);
    return 0;
}
// TODO Write a C program to print the following Pyramid pattern upto Nth row. Where N (number of rows to be printed) is taken as input.
#include <stdio.h>
int main()
{
    int n;
    // char pyramid[] = {};
    printf("Enter the value of N: ");
    scanf("%d", &n);
    while (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
        n--;
    }
    return 0;
}
// TODO Write a C program to check whether a given number (n) is a perfect number or not? (Perfect Number -
// A perfect number is a positive integer number which is equals to the sum of its proper positive divisors.
// For example 6 is a perfect number because its proper divisors are 1, 2, 3 and it’s sum is equals to 6.)
#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            sum += i;
        }
        i++;
    }
    if (sum == n)
        printf("%d %dis a perfect number", sum, n);
    else
        printf("%d %d isn't a perfect number", sum, n);

    return 0;
}
// TODO Write a program to find the GCD (Greatest Common Divisor) of 2 (two) numbers using 'for' loop.
#include <stdio.h>
int main()
{
    int i = 1, x, y, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y); // taking inputs from user

    // checking if any entered number is negative and if it is converted it to positive.
    x = x > 0 ? x : -x;
    y = y > 0 ? y : -y;

    // To find the GCD
    while (i <= x && i <= y)
    {
        if (x % i == 0 && y % i == 0) // checking which number divides both the number x and y
        {
            gcd = i;
            // assigning the divisor to gcd. the value will update after every loop if it finds another divisor.
        }
        i++;
    }
    printf("The Greatest common factor is: %d\n", gcd); // The value of gcd after loop ends will be the GCD.
    return 0;
}

// This program will print reverse of the number user will input.
#include <stdio.h>
int main()
{
    int n, x = 0, y;
    printf("Enter an integer");
    scanf("%d", &n);
    while (n != 0) // the loop will run n-times
    {
        y = n % 10;     // finding the last digit
        x = x * 10 + y; //
        n = n / 10;
    }
    printf("Output is %d\n", x);

    return 0;
}

// If statement has provided non zero parameter i.e. 1 as postfix decrement will happen later so its printing True.
#include <stdio.h>
// #include <ctype.h>
int main()
{
    int a = 1;
    if (a--)
        printf("True\n");
    if (a++)
        printf("False\n");

    return 0;
}

// The output would be 0.00000 as si is declared as int and format-specifier is %f so getting a warning message.
// we should use si as of float type then it will print the correct answer without warning i.e. 15000000.000000.
#include <stdio.h>
// #include <ctype.h>
int main()
{
    int p, t;
    float r, si;
    p = 5000, t = 4, r = 7.5;
    si = (p * t * r) / 100;
    printf("%f\n", si);
    return 0;
}

//  Here 'a' declared as int but starting with 0 so compiler treat it as octal value.
// Here printing a as int so it will print it respective value of int i.e. 65
#include <stdio.h>
// #include <ctype.h>
int main()
{
    int a = 0101;
    float r;

    printf("\na=%d", a);
    return 0;
}

//  Here using assignment operator in if statement that will assign 5 to var1
// i.e. non-zero value is provided in if so condition will get true and will increment var2. and after loop end it will print 5 and 7.
#include <stdio.h>
// #include <ctype.h>
int main()
{
    int var1 = 10, var2 = 6;
    if (var1 = 5)
        var2++;
    printf("%d%d\n", var1, var2++);

    return 0;
}

// Here in first printf (i++ && ++j) as postfix increment, i will not increment in here, it will increment later.
// so as i will be 0 it will not evaluate further and print 0.
// in second printf i will become 1 but j will stay 1. Therefore will print 11
#include <stdio.h>
// #include <ctype.h>
int main()
{
    int i = 0, j = 1;
    printf("\n%d", i++ && ++j);
    printf("\n%d%d", i, j);

    return 0;
}
// num = 123 step - 1 var = num % 10 step - 2 num = num / 10

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3};
    printf("%d\n", arr[3]);

    // for (;;)
    // {
    //     printf("%s\n", arr);
    // }
    return 0;
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    int x = 7;
    printf("%d \n", isnumber(x));
    printf("%0x \n", &x);

    return 0;
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    int n = 7, q, *p;
    int p = &n;
    n = 11;
    q = **p;
    printf("%d \n", q);

    return 0;
}