
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     printf("Enter string: ");
//     scanf("%[^\n]s", str);
//     // gets(str); // reads string from console
//     printf("String is: %s\n", str);
//     printf("\nReverse String is: %s", strrev(str));
//     return 0;
// }

#include <stdio.h>
#include <string.h>
void main()
{
    char string[25];
    printf("Enter String to be reversed : ");
    gets(string);
    printf("String before strrev(): %s\n", string);
    strrev(string);
    printf("The string after strrev(): ");
    puts(string);
}