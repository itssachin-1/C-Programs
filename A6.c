//******************************    Assignment-6 (Day-7) Strings and Functions  ******************************
// TODO-1: Write a C Program to Count Number of Uppercase and in a given string. The string may be a word or a sentence.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void upper(char[]);
void lower(char[]);

int main()
{
    char str[256];
    // char str[0];
    printf("Enter a string: ");
    scanf("%255[^\n]%*c", str); //  %*c to remove trailing \n
                                // scanf("%[^\n]s", str);
                                // scanf("%[^\n]c", str2);
                                // fgets(str, 255, stdin);

    // printf("%lu\n", sizeof str);
    // printf("%s", str);

    upper(str);
    lower(str);

    return 0;
}

void upper(char str[])
{
    int upper = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // printf("%lu", sizeof str);
        if (isupper(str[i]))
            upper += 1;
    }
    // printf("%lu\n", sizeof str); // when you use sizeof op inside it will return size of pointer not the actual size of that.
    printf("\nUppercase Letters : %d\n", upper);
}
void lower(char str[])
{
    int lower = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // printf("%lu", sizeof str);
        if (islower(str[i]))
            lower += 1;
    }
    // printf("%lu\n", sizeof str); // when you use sizeof op inside it will return size of pointer not the actual size of that.
    printf("Lowercase Letters : %d\n", lower);
}

// Second method:
#include <stdio.h>
int main()
{
    char str[256];
    int upper = 0, lower = 0;
    printf("Enter a string: ");
    scanf("%255[^\n]%*c", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // or instead of alphabet you can take ASCII value of that char too.
        {
            upper += 1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lower += 1;
        }
        else
            continue;
    }
    printf("\nUppercase Letters : %d\n", upper);
    printf("Lowercase Letters : %d\n", lower);

    return 0;
}

// TODO-2: Write a C program to print Largest and Smallest Word from a given sentence.
// If there are two or more words of same length then the first one is considered. Here single letter such as
// "I" , "a" is considered as a word
#include <stdio.h>
#include <string.h>

int main()
{
    char str[256], words[100][100], small[100], large[100];
    int i = 0, j = 0, k, length;

    printf("Enter a string: ");
    scanf("%255[^\n]%*c", str);

    // Split the string into words such that each row of array words represents a word
    for (k = 0; str[k] != '\0'; k++)
    {

        // Here, i represents row and j represents column of two-dimensional array words
        if (str[k] != ' ' && str[k] != '\0')
        {
            words[i][j++] = str[k];
        }
        else
        {
            words[i][j] = '\0';
            // Increment row count to store new word
            i++;
            // Set column count to 0
            j = 0;
        }
    }
    // Store row count in variable length
    length = i + 1;

    // Initialize small and large with first word in the string
    strcpy(small, words[0]);
    strcpy(large, words[0]);

    // Determine smallest and largest word in the string
    for (k = 0; k < length; k++)
    {

        // If length of small is greater than any word present in the string
        // Store value of word into small
        if (strlen(small) > strlen(words[k]))
        {
            strcpy(small, words[k]);
        }
        // If length of large is less than any word present in the string
        // Store value of word into large
        if (strlen(large) < strlen(words[k]))
            strcpy(large, words[k]);
    }

    printf("Smallest word: %s\n", small);
    printf("Largest word: %s\n", large);

    return 0;
}

//? program for largest word with count
#include <stdio.h>
#include <string.h>
int main()
{
    char str[256], buffer[256], max_word[256], min_word[256], delimiters[] = " ,.?|/<>:{}[];\n\t*+=$-'!#%";
    int i = 0, max = -1, min = -1;
    printf("Enter a string: ");
    scanf("%255[^\n]%*c", str);
    // int size = sizeof(str);
    // printf("%lu", sizeof str);
    // printf("%lu\n", strlen(str));
    int len = strlen(str);
    // printf("%d\n", len);

    while (i < len)
    {
        // printf("len: %d\n", len);
        // printf("i: %d\n", i);

        int count = 0;
        while (i < len)
        {
            if (strchr(delimiters, str[i]) != NULL) // if any delimiter is found then it will stop counting
                break;
            buffer[count] = str[i]; // to store the word in buffer
            i++;
            count++;
            // printf("%d\n", count);
        }
        // printf("i after while-1: %d\n", i);

        buffer[count] = '\0'; // to put the null char after end of the word
        if (count > max)      // if the current word count is greater than max size word then make it max
        {
            max = count;
            strcpy(max_word, buffer);
        }
        // else
        // {
        //     min = count;
        //     strcpy(min_word, buffer);
        // }

        while (i < len)
        {
            if (strchr(delimiters, str[i]) == NULL) // if any non delimiter chr is found(means it reached to first letter of next word) then break otherwise increase the array index
                break;
            i++;
        }
        // printf("i after while: %d\n", i);
    }
    printf("Largest word is: %s(%d)\n", max_word, max);
    // printf("Smallest word is: %s(%d)\n", min_word, min);

    return 0;
}
// 3rd question is missing in assignment itself
// TODO-4: Write a C Program to reverse a given word using function. e.g. INDIA should be printed as AIDNI
#include <stdio.h>
#include <string.h>
int main()
{
    char str[256];
    printf("Enter a string: ");
    scanf("%255[^\n]%*c", str);
    int len = strlen(str);

    // printf("length: %d", len);
    while (len != 0) // while length of string is not zero printing chars. from the end
    {
        printf("%c", str[(len - 1)]);
        len--;
    }
    printf("\n");

    return 0;
}

// TODO-5:  Write a program to check if a given integer is Prime Number using function
#include <stdio.h>
void checkPrime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    checkPrime(n);
    // printf("%d\n", flag);
    return 0;
}
void checkPrime(int n)
{
    int flag = 0, result;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            // printf("n/i: %d/%d\n", n, i);
            flag = 0;
            break;
            // printf("n after break: %d\n", n);
        }
        else
        {
            flag = 1;
            // printf("n/i in else: %d/%d\n", n, i);
        }
    }
    // printf("flag: %d\n", flag);
    (flag == 1) ? printf("%d is a prime number.", n) : printf("%d is NOT a prime number.", n);
    // return result;
}

// TODO-6: Write a C Program to find power of a given number using recursion.
#include <stdio.h>
int power(int, int);

int main()
{
    int n, p, r;
    printf("Enter the base no.: ");
    scanf("%d", &n);
    printf("Enter the exponent: ");
    scanf("%d", &p);

    r = power(n, p);
    printf("%d^%d is %d\n", n, p, r);
    return 0;
}
int power(int n, int p)
{
    if (p >= 1)
        return n * power(n, p - 1);
    return 1;
}
//*?!
// TODO-7:  Write a C Program to print Binary Equivalent of an Integer using Recursion.
#include <stdio.h>
#include <stdlib.h>
void decToBin(int);
int main()
{
    int n;
    printf("Enter a integer number: ");
    scanf("%d", &n);

    decToBin(n);
    printf("\n");
    return 0;
}
void decToBin(int n)
{
    printf("n before: %d\n", n);
    if (n == 0)
        return;
    decToBin(n / 2);
    printf("n: %d\n", n);
    printf("%d", n % 2);
}

// second method:
#include <stdio.h>
int decimalToBinary(int);
int main()
{
    int n;
    printf("Enter the base no.: ");
    scanf("%d", &n);

    printf("%d\n", decimalToBinary(n));

    return 0;
}
int decimalToBinary(int n)
{
    if (n == 0)
        return 0;
    return (n % 2) + 10 * decimalToBinary(n / 2);
}
// 11%2 +10 *decimalToBinary(11/2)
// 1+10*decimalToBinary(5)
// 1+10*(5%2+10*decimalToBinary(5/2)
// 1+10*(1+10*decimalToBinary(2))
// 1+10*(1+10*(0+10*decimalToBinary(1)))
// 1+10*(1+10)(0+10)*(1+10*0)
// 11*11*10*2

// TODO-8 what will be the output of following code
#include <stdio.h>
int main()
{
    char str1[] = "Week-7-Assignment";
    char str2[] = {'W', 'e', 'e', 'k', '-', '7', '-', 'A', 's', 's', 'i', 'g', 'n', 'm', 'e', 'n', 't'};
    int n1 = sizeof(str1) / sizeof(str1[0]); // 18/1= 18 because \0 is added at the end of the string
    int n2 = sizeof(str2) / sizeof(str2[0]); // 18/1=17

    printf("n1= %d n2= %d", n1, n2);
    // printf("%d", 18 / 1);
    printf("\n%lu %lu", sizeof str2, sizeof str2[0]);
    return 0;
}
// Output: n1= 18 n2= 17
// Explanation: if size of array is not specified then in case of double quoted array of chars, at the end
// a "\0"(NULL Char) will get assigned by compiler but not assigned in case two of comma separated array of chars.
// so the size of str1 will become 18 but size of str2 remains as it is i.e. 17.

// TODO-9 what will be the output of following code
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "world";
    printf("%s", strcpy(str2, strcat(str1, str2)));

    return 0;
}
// Output: Helloworld
// Explanation: strcpy() and strcat are built-in function of string.h library.
// strcpy(): copies source string(str2) to destination string(str1) and returns destination string.
// strcat(): function concatenate source and destination strings and stores the result in the destination string and returns the same.
// strcpy(str2, strcat(str1, str2)) --> strcpy(str2, "Helloworld") --> Helloworld

// TODO-10 to get the output as"Hwi orea", what should be the condition inside if statement?
#include <stdio.h>
int main()
{
    int i;
    char s[] = "How is your exam";

    for (i = 0; s[i] != '\0'; ++i)
    {
        if (i % 2 == 0)
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}
// Output: Hwi orea
// Explanation: The required condition should be "i%2 == 0" as it is printing chars. at even index.

// TODO-11 what will be the value of i after the execution of code fragment given below:
#include <stdio.h>
#include <string.h>
int main()
{
    static char str1[] = "dills";
    static char str2[] = "dills";
    static char str3[] = "daffo";
    int i;
    // printf("%s", strcpy(str2, str1));

    i = strcmp(strcat(str3, strcpy(str2, str1)), "daffodills");
    printf("%d", i);

    return 0;
}
// Output: Illegal instruction: 4
// Explanation: strcmp(strcat(str3, strcpy(str2, str1)), "daffodills") --> strcmp(strcat(str3, "dills"), "daffodills") -
// -> strcmp(strcat("daffo", "dills"), "daffodills") --> strcmp("daffodills", "daffodills") --> 0.
// strcmp returns 0 if both strings are equal, returns >0 if first non-matching char is greater in str1 than str2
// and returns <0 if first non-matching char in str1 is smaller than str2.

// TODO-12 what will be the output of following code
#include <stdio.h>
#include <string.h>
int main()
{
    char p[] = "assignment";
    char t;
    int i, j;
    for (i = 0, j = strlen(p); i < j; i++)
    {
        t = p[i];
        p[i] = p[j - i];
        p[j - i] = t;
    }

    printf("%s", p);
    return 0;
}
// Output: No-output
// Explanation: p will initialize as ['a', 's','s','i','g','n','m','e','n','t,'\0']
// After the first iteration value of p will swap and will be ['\0', 's','s','i','g','n','m','e','n','t,'a']
// Then the loop will terminate because the 0-th element is '\0'. and will print nothing as '\0' terminates a string.

// TODO-13 what will be the output of following code
#include <stdio.h>
void fu(int, int);
int main()
{
    char x = 67, y = 'C';
    fu(x, y);
    return 0;
}
void fu(int x, int y)
{
    printf("%d,%d", x, y);
}
// Output: 67,67
// Explanation: the function taking x=67 and y='C' i.e. 67(Taking Decimal value of ASCII char. as converting from char to int)

// TODO-14 what will be returned by the function f(1)
#include <stdio.h>
int f(int);
int main()
{
    printf("%d", f(1));
    return 0;
}
int f(int n)
{
    static int i = 1;
    if (n >= 5)
        return n;
    n = n + i;
    i++;
    return f(n);
}
// Output: 7
// Explanation: f(1) --> f(2+1) --> (4+1) --> f(6+1) --> n i.e 7
// first f(1) is called in main() then n = n+i= 1+1 then i incremented so n becomes 3 and f(3) get called and so on.

// TODO-15 How many 'Hi' will be printed in the program:
#include <stdio.h>
int i;
int fun();
int main()
{
    // printf("%d\n", i);  // the value of is 0
    while (i)
    {
        fun();
        main();
    }
    printf("Hello\n");
    return 0;
}
int fun()
{
    printf("Hi");
}
// Output: 0 Hi will be printed and instead Hello will be printed.
// Explanation: i is a global variable so it will be initialized automatically to 0 during time of declaration.
// so while is passing the value of i i.e. 0 so condition will become false and therefore while loop will never execute
// and functions inside whhile will never get called and so will just print Hello.

// TODO-16 what will be the output of following code
#include <stdio.h>
float func(float age[]);
int main()
{
    float result, age[] = {23.4, 55, 22.6, 3, 40.5, 18};
    result = func(age);
    printf("%0.2f", result);
    return 0;
}

float func(float age[])
{
    int i;
    float result, sum = 0.0;
    for (i = 0; i < 6; ++i)
        sum += age[i];
    printf("%0.3f", sum);

    result = (sum / 6);
    return result;
}
// Output: 27.08
// Explanation: func(age) --> 162.50/6 --> 27.08
// func() is taking the array summing up the values and returning sum/6 i.e. 27.08

// TODO-17 what will be the output of following code
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        // printf("%d ", &i);
        int i = 10;
        printf("%d ", i);
        i++;
        // printf("%d  ", &i);
    }
    return 0;
}
// Output: 10 10 10 10 10
// Explanation: i is redefined in for loop again, both i holds different memory location. So printed 10, 5-times.

// TODO-18 How many times function factorial will be executed
#include <stdio.h>
int factorial(int);
int main()
{
    int n = 10;
    long int f;
    f = factorial(n);
    printf("%d!= %ld\n", n, f);
    return 0;
}
int count = 0;

int factorial(int n)
{
    // count++;
    // printf("%d", count);
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
// Output: (10!= 3628800)
// Explanation: factorial executed 11-times (n=10 to 0).

// TODO-19 what will be the output of following code
#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 10, num2 = 20;
    printf("Before swapping num1 = %d num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("After swapping num1 = %d num2 = %d\n", num1, num2);
    return 0;
}
// Output: Before swapping num1 = 10 num2 = 20
// After swapping num1 = 10 num2 = 20
// Explanation: Its printing the same because its a void function so it won't return anything. To make it work
// we have to put that after swapping printf statement inside the void swap() function and also we have to change
// the varibles num1 to a and num2 to b in that printf.

// TODO-20 The function func is used to find?
#include <stdio.h>
int func(int, int, int);

int main()
{
    int a = 10, b = 20, c = 30;
    printf("%d", func(a, b, c));
    return 0;
}
int func(int a, int b, int c)
{
    if ((a >= b) && (c < b))
    {
        return b;
        printf("%d", b);
    }

    else if (a >= b)
    {
        return func(a, c, b);
    }
    else
        return func(b, a, c);
}
// Output: 20
// Explanation:
// func(a,b,c) returns the median element of the a, b and c,but not the middle element of a , b and c. But if a = b = c,
// then infinite loop.
// The median is the middle number in a sorted, ascending or descending, list of numbers.

/* ( - wrong! - checking if (20 >= 10 && 30 < 20) i.e. false so control goes to else if (10>=20) i.e. false
so agin control goes to else statement which recalls the function but shuffled the parameter as func(b,a,c)
and check conditions again and will keep checking until the if statement condition get satisfied and then it will print the value of b
that would be in the function at that time as values keep changing in every recursion.) */