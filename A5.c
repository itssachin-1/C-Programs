//***************************************    Assignment-5 (Day-6)   ***************************************

// TODO-1 Write a Program to find if a given number is Armstrong number. Armstrong number has property: 153= 1^3 +5^3 +3^3
#include <stdio.h>
#include <math.h>
int main()
{
    int num, n = 0, tmp, remainder, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    tmp = num; // assigning entered number to tmp variable so the original num won't change.

    // calculating number of digits
    while (tmp != 0)
    {
        tmp /= 10;
        n++;
    }
    tmp = num;

    while (tmp != 0)
    {
        // calculate the last digit
        remainder = tmp % 10;
        // calculate the power of digit using pow function i.e included in math.h
        result += pow(remainder, n);
        // remove the last digit
        tmp /= 10;
        printf("result is %d\n", result);
    }
    result == num ? printf("%d is an Armstrong number.\n", num) : printf("%d isn't an Armstrong number.\n", num);

    return 0;
}

// TODO-2 Write a program to find whether given number is palindrome or not. Palindrome number is a number which is same as its reverse
#include <stdio.h>
int main()
{
    int x, tmp, remainder, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    tmp = x;

    // find the reverse of a number
    while (tmp != 0)
    {
        // find the last digit
        remainder = tmp % 10;

        // finding the reverse
        reverse = reverse * 10 + remainder; // multiplying by 10 to shift its place by 1 unit

        // remove the last digit
        tmp /= 10;
    }

    // check if reverse == number
    reverse == x ? printf("%d is a palindrome", x) : printf("%d isn't a palindrome", x);
    return 0;
}

// TODO-3 Write a program in C to find whether a number n is prime number or not
#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    flag == 0 ? printf("%d is a prime number.", num) : printf("%d isn't a prime number.", num);
    return 0;
}

// TODO-4 Write a program in C to find all prime numbers from 1 to n
#include <stdio.h>
int main()
{
    int num, flag;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers are: ");
    while (num != 0)
    {
        if (num <= 1)
            flag = 1;
        else if (num == 2 || num == 3)
            flag = 0;
        else
        {
            for (int i = 2; i <= num / 2; i++)
            {
                flag = 0;

                if (num % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
            printf("%d ", num);
        num--;
    }

    return 0;
}

// TODO-5   what will be the output:
#include <stdio.h>
int main()
{
    int i, a[4] = {3, 1, 2, 4}, result;
    result = a[0];
    for (i = 1; i < 4; i++)
    {
        if (result > a[i])
            continue;
        result = a[i];
    }
    printf("%d\n", result);

    return 0;
}
// Output: 4
// Result is assigned to a[0] i.e. 3 and for loop is looping through all elements of the array.
// if condition is checking if (result > the element) then do nothing
// otherwise make result = element greater than 3 i.e 4 here. so printing 4 in the printf statement and that is the output.

// TODO-6   what will be the output:
#include <stdio.h>
int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {11, 2, 3, 14, 5, 16};

    int i, j, k;
    j = ++arr[2]; // j=4
    printf("i=%d,j=%d k=%d\n", i, j, k);

    k = arr[1]++; // k= 2
    printf("i=%d,j=%d k=%d\n", i, j, k);

    i = arr[k++]; // i= 5 j=
    printf("i=%d,j=%d k=%d\n", i, j, k);

    return 0;
}
// Output: i=5,j=5 k=2
// j= ++arr[2] i.e. ++3 i.e 4
// k= arr[1]++ i.e. 2++ i.e 2 and will increment in next line
// i= arr[j++] i.e. arr[4++] i.e arr[4] i.e. 5 and j will increment and will become 5 in next line

// TODO-7   what will be the output:
#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    switch (sizeof(a))
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("IIT KGP");
        break;
    }
    printf("IIT Madras");

    return 0;
}
// Output : error : use of undeclared identifier 'a'. As a is not declared.

// TODO-8   what will be the output:
#include <stdio.h>
int main()
{
    int i = 0;
    char c = 'a';
    while (i < 5)
    {
        i++;
        switch (c)
        {
        case 'a':
            printf("%c", c);
            break;
        }
    }
    printf("a\n");

    return 0;
}
// Output : aaaaaa  printed 6-times as after while there is another one printf statement.
// while prints a 5-times as condition specified and switch is switching c to a as case a.

// TODO-9   what will be the output:
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int a;
    arr[1] = ++arr[1]; // 3
    a = arr[1]++;      // 3
    arr[1] = arr[a++]; // 4

    printf("%d%d", a, arr[1]);
    return 0;
}
// Output: 44
// arr[1] is preincremented and become 3. a is assigned to arr[1]++ i.e a= 3 and again arr[1] is assigned to arr[a++] i.e arr[3] i.e 4 so printed 4 4

// TODO-10 Write a C Program to find Largest Element of an Integer Array.
#include <stdio.h>
int main()
{
    int n, arr[n], tmp;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // sort the array
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    // print the largest element
    printf("%d ", arr[n - 1]);

    return 0;
}

// TODO-11 Write a C Program to print the array 5 10 20 30 40 50 elements in reverse order (Not reverse sorted order.
// Just the last element will become first element, second last element will become second element and so on)
#include <stdio.h>
int main()
{
    int n, arr[n];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
        n--;
    }

    return 0;
}

//! TODO-12 Write a C program to read Two One Dimensional Arrays of same data type (integer type) and merge them into
// another One Dimensional Array of same type. First take n as size of first array, then input all n elements of first array.
#include <stdio.h>
int main()
{
    int n, m, o;

    // first array
    printf("Enter array-1 size: ");
    scanf("%d", &n);
    int arr1[n];
    printf("%lu size of arr1: ", sizeof arr1);

    printf("\nEnter elements of the array-1: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    // second array
    printf("\nEnter array-2 size: ");
    scanf("%d", &m);
    int arr2[m];

    printf("\nEnter elements of the array-2: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    // making final array size equal to sum of size of both array.
    o = n + m;
    int arr3[o];
    // printf("Size of arr1: %lu\n", sizeof arr1);
    // printf("Size of arr2: %lu\n", sizeof arr2);
    // printf("Size of arr3: %lu\n", sizeof arr3);

    // adding first array elements to arr3
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    // adding second array elements to arr3
    for (int i = 0, j = n; j < o && i < m; i++, j++)
    {
        arr3[j] = arr2[i];
    }

    // printing the final array
    printf("\nThe sum of both arrays arr3[%d]: ", o);
    for (int i = 0; i < o; i++)
    {
        printf("%d\t", arr3[i]);
    }
    printf("\n");

    return 0;
}

//? second way:

// #include <stdio.h>
// int main()
// {
//     int n, m, o;

//     int i, j;
//     printf("Enter 1st array size: ");
//     scanf("%d", &n);
//     int arr1[n];

//     printf("Enter 2nd array size: ");
//     scanf("%d", &m);
//     int arr2[m];

//     printf("%lu size of arr1: ", sizeof arr1);
//     int x = n + m;
//     int merge[x];

//     // first array

//     printf("Enter Array1 Elements: ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i]);
//         merge[i] = arr1[i];
//     }

//     printf("size of merge: %lu", sizeof merge);

//     // second array

//     printf("\nEnter Array2 Elements: ");
//     for (i = 0; i < m; i++)
//     {
//         scanf("%d", &arr2[i]);
//         merge[n] = arr2[i];
//         n++;
//     }
//     printf("%lu size of merge: ", sizeof merge);

//     // array1 and array2 merge
//     printf("\nArray3 after merge: ");
//     for (j = 0; j < n; j++)
//     {
//         printf("%d ", merge[j]);
//     }
//     printf("\n");
//     printf("\n%lu size of merge: ", sizeof merge);

//     return 0;
// }

// TODO-13 Write a C Program to delete duplicate elements from an array of integers.
// First take n as size of first array, then input all n elements of first array. Now delete duplicate elements from
// nested array. You can use nested loop for deleting duplicate elements.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // delete duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                // delete the current position of the duplicate element
                for (int x = j; x < n - 1; x++)
                {
                    arr[x] = arr[x + 1];
                }

                // decreasing the size of array after removing duplicate element
                n--;

                // if the position of the elements is changes, don't increase the index j
                j--;
            }
        }
    }

    printf("Array without duplicate elements arr[%d]: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}

// TODO-14 C Program to delete an element from a specified location of an Array starting from array [0] as
// the 1st position, array[1] as second position and so on. First take n as size of first array, then
// input all n elements of first array. Now input index value from user, print the array after deleting that index value from array.
#include <stdio.h>
int main()
{
    int n, pos;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    // take the element to delete
    printf("Enter the element position to delete: ");
    scanf("%d", &pos);

    // delete the element
    if (pos < 0 || pos > n)
    {
        printf("Deletion isn't possible!");
    }
    else
    {
        for (int i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];
        // n--;

        printf("Array after deliting the element arr[%d]: [\t", n);
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", arr[i]);
        }
        printf("]\n");
    }

    return 0;
}

// TODO-15 Write a C program to find the sum of all elements of each row of a matrix.
// Input number of rows and number of cols from user. Now input all rows*cols values from user
#include <stdio.h>
int main()
{
    int row, col, sum = 0, arr[10][10];
    printf("Enter the rows and coloumn for matrix separated by space: ");
    scanf("%d %d", &row, &col);

    // enter elements in matrix
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // print the matrix
    printf("\n--The matrix-- \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    // print the sum of elements of the matrix
    printf("\nThe sum of elements of the matrix is: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        printf("%d\n", sum);
    }

    return 0;
}

// TODO-16 Write a C program to find subtraction of two matrices i.e. matrix_A - matrix_B=matrix_C.
// Input number of rows and number of cols from user for both A and B matrix. Now input all rows*cols values from user
#include <stdio.h>
int main()
{
    int row, col, diff[10][10], arr1[10][10], arr2[10][10];
    // matrix-1
    printf("Enter the order of matrix(row & column) separated by space: ");
    scanf("%d %d", &row, &col);

    // enter elements in matrix
    printf("Enter the elements of the matrix_1: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // matrix-2
    // enter elements in matrix
    printf("Enter the elements of the matrix_2: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // print matrices
    printf("\nThe matrix_1 is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nThe matrix_2 is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d ", arr2[i][j]);
        }
        printf("\n");
    }

    // print the difference of elements of the matrix
    printf("\nmatrix_1 - matrix_2: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            diff[i][j] = arr1[i][j] - arr2[i][j];
            printf("%3d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// TODO-17 Write a C program to print lower triangle of a square matrix.
// Input size of square matrix as n. Solve of nxn square matrix
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of squre matrix: ");
    scanf("%d", &n);

    int sqmt[n][n];
    // take elements of the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("sqmt[%d][%d]: ", i, j);
            scanf("%d", &sqmt[i][j]);
        }
    }

    // print the matrix
    printf("The squre matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", sqmt[i][j]);
        }
        printf("\n");
    }

    // lower triangle matrix
    printf("Required lower triangle squre matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            (i >= j) ? printf("%3d ", sqmt[i][j]) : printf("%3d", 0);
        }
        printf("\n");
    }
    return 0;
}