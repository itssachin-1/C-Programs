
//***************************************    Assignment-1 (Day-2)   ***************************************
//! Volume of box:
//? Write a C program to calculate volume of a box. A box can be represented by three quantities: length, width and height in inches.
//? Volume can be calculated as: volume = height * length * width
//? Take the input from user (using scanf) and print the volume as a result. Use float data types for all variables

#include <stdio.h>

int main()
{
    float length, height, width;
    double volume;
    printf("Enter the length of the box: ");
    scanf("%f", &length);
    printf("Enter the width of the box: ");
    scanf("%f", &width);
    printf("Enter the height of the box: ");
    scanf("%f", &height);
    volume = length * height * width;
    printf("The volume of the box is: %lf\n", volume);

    return 0;
}

//! Circle:
// ? Write a program to calculate area and circumference of a circle using formula: 𝑎𝑟𝑒𝑎 = 𝜋𝑟2 and 𝑐𝑖𝑟𝑐𝑢𝑚𝑓𝑒𝑟𝑒𝑛𝑐𝑒 = 2𝜋r.
// ? Take the input r from the user.

// #include <math.h>
// #include <stdio.h>

// int main()
// {
//     float r;
//     double area, circumference;
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &r);

//     area = M_PI * r * r;
//     circumference = 2 * M_PI * r;

//     printf("\nArea of the circle is: %lf\n", area);
//     printf("Circumference of the circle is: %lf\n", circumference);

//     return 0;
// }

// //! Volume of sphere:
//? Write a program to calculate volume of a sphere with 10-meter radius, using the formula 𝑣 = 4/3𝜋𝑟3.
//? Write the fraction 4/3 as 4.0f/3.0f (Also Try writing 4/3 and see what happens?).
//? Use variable name for 𝜋 as PI and store value as 22.0f/7.0f. Modify same program and prompt the user to enter the radius.

#include <stdio.h>

int main()
{
    float r;
    // r = 10;
    float v1, v2;
    float PI = 22.0f / 7.0f;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);

    v1 = 4 / 3 * PI * r * r * r;
    v2 = 4.0f / 3.0f * PI * r * r * r;

    printf("\nVolume of the sphere is: %lf when using 4/3 and %lf when using 4.0f / 3.0f\n", v1, v2);
    return 0;
}

// //! Polynomial:
//? Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
//? 6𝑥5 + 5𝑥4 − 4𝑥3 + 3𝑥2 + 2𝑥 + 1
//* Have to use: gcc filename.c -lm  in linux for compile

#include <stdio.h>
#include <math.h>

int main()
{
    int x, p;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    // p = ((6 * x * x * x * x * x) + (5 * x * x * x * x) - (4 * x * x * x) + (3 * x * x) + (2 * x) + 1);
    // p = pow(x, 3);
    p = ((6 * pow(x, 5)) + (5 * pow(x, 4)) - (4 * pow(x, 3)) + (3 * pow(x, 2)) + (2 * x) + 1);

    printf("\nValue of the polynomial is: %d\n", p);
    return 0;
}

//! Simple Interest:
//? Write a program to calculate simple interest using formula: 𝑠𝑖 = 𝑝𝑟𝑖𝑛𝑐𝑖𝑝𝑙𝑒 ∗ 𝑟𝑎𝑡𝑒 ∗ 𝑡𝑖𝑚𝑒. Take all variable as float type.

#include <stdio.h>

int main()
{
    float principle, rate, time, SI;
    printf("Enter Principle, rate and time respectively: ");
    scanf("%f %f %f", &principle, &rate, &time);

    SI = principle * rate * time;
    printf("\nSimple Interest is: %f\n", SI);
    return 0;
}
