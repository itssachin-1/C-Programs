//***************************************    Assignment-3 (Day-4)   ***************************************

//? 1. Develop a C program to perform operations (+,*,-, / and %) on two whole numbers.
//? Identify suitable data types to represent the numbers and resultant values.
#include <stdio.h>
int main()
{
    int x, y; // took int data type for whole numbers.
    char op;

    printf("Enter a whole number then an operator then second whole number: ");
    scanf("%d %c %d", &x, &op, &y); // took three inputs x , y and op

    switch (op)
    {
    case '+':
        printf("%d + %d= %d\n", x, y, x + y);
        break;
    case '-':
        printf("%d - %d= %d\n", x, y, x - y);
        break;
    case '*':
        printf("%d * %d= %d\n", x, y, x * y);
        break;
    case '/':
        printf("%d / %d= %d\n", x, y, x / y);
        break;
    case '%':
        printf("%d %% %d= %d\n", x, y, x % y);
        break;
    default:
        printf("Somthing went wrong!");
        break;
    }
    return 0;
}

//? 2. Write a program to demonstrate bitwise operators.
#include <stdio.h>
int main()
{
    char i = 5, j = 6;
    // taking char data type because char is smallest group of bits (i.e. 8) allow us to work with.
    // i = 5 and j = 6 will represented as its binary form of 8-bits.

    printf("%d & %d = %d\n", i, j, i & j); // bitwise &(and) operator takes two operand and does binary AND operation on every bits.
    printf("%d | %d = %d\n", i, j, i | j); // bitwise |(or) operator takes two operand and does binary OR operation on every bits.
    printf("%d ^ %d = %d\n", i, j, i ^ j); // bitwise ^(exclusive OR) operator takes two operand and does binary XOR operation on every bits.
    printf("~%d = %d\n", j, ~j);           // bitwise ~(complement) operator takes one operand and does one's complement operation i.e. it converts bit 1 to 0 and 0 to 1.
    printf("%d << 1 = %d\n", i, i << 1);   // bitwise <<(left shift) shifts bit to left. The number right after the operator decide how much bit to shift. Also Output= i*2^1.
    printf("%d >> 2 = %d\n", i, i >> 2);   // bitwise >>(right shift) shifts bit to right. The number right after the operator decide how much bit to shift. Also Output= i/2^2.

    return 0;
}
//? 3. Develop a C program to add two operands and store the result in one of the operand using
//? addition assignment operator.
#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter two numbers: ");
    scanf("%f%f", &x, &y);                           // taking two inputs
    y += x;                                          // adding x and y and storing in y
    printf("The result of summation is: %.3f\n", y); // %.3f represents the no. of digits to be printed after decimal point.
    // printf("%.3f+%.3f=%.3f\n", x, y, x + y);
    return 0;
}
//? 4. Write a C program to find the maximum of 2 numbers using Conditional
//? operator.
#include <stdio.h>
int main()
{
    float x, y, max; // declare three variables as float type.

    printf("Enter two numbers: ");
    scanf("%f%f", &x, &y);

    max = (x > y) ? x : y; // To find max i used comparision operator to check wheather x is greater than y.
    printf("%f", max);     // printed the maximum of the two.

    return 0;
}