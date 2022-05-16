//***************************************    Assignment-2 (Day-4)   ***************************************
// TODO: Write a C program to check if a given Number is zero or Positive or Negative Using if...else statement.
#include <stdio.h>
int main()
{
    float i;
    printf("Enter a number: ");
    scanf("%f", &i);
    if (i < 0)
        printf("The number is a negative number.\n");
    else if (i > 0)
        printf("The number is a positive number.\n");
    else
        printf("The number is Zero.\n");
    return 0;
}

// TODO: Write a C Program to find the Largest Integer among Three integers using if statement.
//  Note: To take input using single line Use scanf(“%d %d %d”, &num1, &num2, &num3);
#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter three numbers seperated by space: ");
    scanf("%d%d%d", &i, &j, &k);
    if (i > j)
    {
        if (i > k)
            printf("%d is the largest number.", i);
        else

            printf("%d is the largest number.", k);
    }
    else if (j > k)
        printf("%d is the largest number.", j);
    else
        printf("%d is the largest number.", k);

    return 0;
}

// TODO: Write a C Program to find the Smallest Integer among Three integers using IF and Logical && operator.
#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter three numbers seperated by space: ");
    scanf("%d%d%d", &i, &j, &k);
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

// TODO: What is output of following program?
#include <stdio.h>
int main()
{
    int i;
    if (i = 0, 2, 3) // assignment operator evaluates right to left.
                     // prints garbage value of i. i.e. non zero so condition becomes true
        printf("CDAC ");
    else
        printf("C Programming ");
    printf("%d\n", i);
    return 0;
}
// Output : CDAC

// TODO: What is output of following program?
#include <stdio.h>
int main()
{
    int a = 12, b = 18, c = 7, d = 4, result;
    result = a + a * -b / c % d + c * d; // 12+12*-18/7%4+7*
    printf("%d\n", result);
    return 0;
}
// Output : 38

// TODO: What is output of following program?
#include <stdio.h>
int main()
{
    int y = 10;
    int z = y + (y == 10);
    printf("%d\n", z);
    return 0;
}
// Output : 11

// TODO: What is output of following program?
#include <stdio.h>
int main()
{
    int h = 9;
    int b = 5 * 2 + 2 * 3 < h * 2 ? 5 : 3;
    printf("%d", b);
    return 0;
}
// Output : 5

// TODO: What is output of following program?
#include <stdio.h>
int main()
{
    int x = 0;
    if (x++)
        printf("true\n");
    else if (x == 1)
        printf("false\n");
    return 0;
}
// Output : false

// TODO: What is output of following program?
#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3;
    if (c > b > a)
    {
        printf("True\n");
    }
    else
        printf("False\n");
    return 0;
}
// Output : False

// TODO: What is output of following program?
#include <stdio.h>
int main()
{
    int a = 1, b = -1, c = 0, d;
    d = ++a && ++b || c--;
    // printf("%d %d %d %d ", a, b, c, d);
    if (d)
        printf("Kolkata\n");
    else if (c) // (c= -1)anything non zero is a true condition
        printf("Delhi\n");
    else
        printf("Bangalore\n");
    return 0;
}
// Output : Delhi
