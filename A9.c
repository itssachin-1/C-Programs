// *********************************** Assignment-9 (Day-10) ***********************************
//?  Structures and Unions:
// TODO-1. Write a simple structure called student containing fields (int id, char gender and char name[size];
// Create a variable of this structure(ex: std1), fill in the fields of this structure variable and use a pointer to std1 which changes the member values for std1.
#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char gender, name[256];
};
int main()
{
    struct student std1, *ptr;
    ptr = &std1;
    std1.id = 001;
    std1.gender = 'M';
    strcpy(std1.name, "Sachin Kumar");
    printf("ID: %3.3d\n", ptr->id);
    printf("Gender: %c\n", ptr->gender);
    printf("Name: %s\n", ptr->name);

    ptr->id = 116;
    printf("Changed ID: %3.3d\n", ptr->id);

    return 0;
}

// TODO-2. Define a structure type struct personal that would contain person name, date of joining and salary
// using this structure to read this information of 5 people and print the same on screen.
#include <stdio.h>
struct person
{
    char name[56];
    char doj[10];
    float salary;
} p[5];

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Name : ");
        scanf(" %[^\n]s", p[i].name);

        printf("Enter %s's Date of Joining (dd-mm-yyyy) : ", p[i].name);
        scanf(" %[^\n]s", p[i].doj);

        printf("Enter %s's Salary : ", p[i].name);
        scanf("%f", &p[i].salary);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n\n %s details: ", p[i].name);
        printf("\n Name   = %s", p[i].name);
        printf("\n DOJ    = %s", p[i].doj);
        printf("\n Salary = %.2f", p[i].salary);
    }
    return 0;
}
// TODO-3. Define structure data type called time_struct containing three member’s integer hour, integer minute and integer second.
// Develop a program that would assign values to the individual number and display the time in the following format: 16: 40:51
#include <stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int second;
} t;

int main(void)
{
    printf("\n Enter Hour : ");
    scanf("%d", &t.hour);
    printf(" Enter Minute: ");
    scanf("%d", &t.minute);
    printf(" Enter Second : ");
    scanf("%d", &t.second);

    printf("\n Time %.2d:%.2d:%.2d\n", t.hour % 24, t.minute % 60, t.second % 60);

    return 0;
}

// TODO-4. Define a structure called cricket that will describe the following information: Player name Team name Batting average
// Using cricket, declare an array player with 50 elements and write a C program to read the information about all the 50 players and print team-wise list containing names of players with their batting average.
#include <stdio.h>
#include <string.h>
struct cricket
{
    char pname[20];
    char tname[20];
    float batavg;
};

int main()
{
    struct cricket c[5], t;
    int i, j, n = 5;
    float p;

    printf("\nEnter data of %d players", n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Player Name for player-%d = ", i + 1);
        scanf(" %[^\n]s", c[i].pname);

        printf("Enter Team Name for player-%d = ", i + 1);
        scanf(" %[^\n]s", c[i].tname);

        printf("Enter Batting Avg. for player-%d = ", i + 1);
        scanf("%f", &c[i].batavg);
    }

    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            if (strcmp(c[j - 1].tname, c[j].tname) > 0)
            {
                t = c[j - 1];
                c[j - 1] = c[j];
                c[j] = t;
            }
        }
    }

    printf("\nTeamwise Player list: ");
    printf("\n %*s", -20, "Players");
    printf("%*s", -20, "Team");
    printf("%*s", -20, "Batting_Avg.");

    for (i = 0; i < n; i++)
    {
        printf("\n%-20s %-20s %.2f", c[i].pname, c[i].tname, c[i].batavg);
    }
    printf("\n");
    return 0;
}

// TODO-5. Design a structure student_record to contain name, branch and total marks obtained. Develop a program to
// read data for 10 students in a class and print them.
#include <stdio.h>
struct student_record
{
    char name[20];
    char branch[20];
    int obtained_marks;
} p[10];

int main(void)
{
    int i = 0, n = 3;

    for (i = 0; i < n; i++)
    {
        printf("\n Enter Student Name : ");
        scanf(" %[^\n]s", p[i].name);
        printf(" Enter Students Branch : ");
        scanf(" %[^\n]s", p[i].branch);
        printf(" Enter Students Marks : ");
        scanf("%d", &p[i].obtained_marks);
    }

    for (i = 0; i < n; i++)
    {
        printf("\n\n Student %d Detail", i + 1);
        printf("\n Name           : %s", p[i].name);
        printf("\n Branch         : %s", p[i].branch);
        printf("\n Obtained marks : %d", p[i].obtained_marks);
    }
    printf("\n");
    return 0;
}

//? File handling:
// TODO-1. Write a program in C to write multiple lines in a text file.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("mytext.txt", "w");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(-1);
    }
    char str[256];
    int n;
    printf("Enter number of lines to write: ");
    scanf("%d", &n);

    printf("Enter %d line of txt: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]s", str);
        fprintf(fptr, "%s\n", str);
    }
    printf("\nTexts got written in 'mytext.txt' go check!\n");
    fclose(fptr);
    return 0;
}
// TODO-2 Write a program in C to read the file and store the lines into an array.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fptr = NULL;
    char fname[10];
    char line[10][128];
    int i = 0, tot = 0;
    printf("Enter the name of file to open: ");
    scanf("%s", fname);
    fptr = fopen(fname, "r");
    while (fgets(line[i], 128, fptr))
    {
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    tot = i;
    // if (fptr == NULL)
    // {
    //     printf("Error!");
    //     exit(-1);
    // }
    printf("Contents of the file: \n");
    for (int i = 0; i < tot; i++)
    {
        printf(" %s\n", line[i]);
    }
    printf("\n");
    // fclose(fptr);
    return 0;
}
// TODO-3 Write a program in C to count a number of words and characters in a file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    int wrd = 1, charctr = 1;
    char fname[20];
    printf(" Input the filename to be opened : ");
    scanf("%s", fname);

    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf(" File does not exist or can't be opened.");
    }
    else
    {
        ch = fgetc(fptr);
        printf(" The content of the file %s are : ", fname);
        while (ch != EOF)
        {
            printf("%c", ch);
            if (ch == ' ' || ch == '\n')
            {
                wrd++;
            }
            else
            {
                charctr++;
            }
            ch = fgetc(fptr);
        }
        printf("\n The number of words in the  file %s are : %d\n", fname, wrd - 2);
        printf(" The number of characters in the  file %s are : %d\n\n", fname, charctr - 1);
    }
    fclose(fptr);
    return 0;
}

// TODO-4 Write a program in C to copy a file in another name.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1, *fptr2;
    char ch, fname1[20], fname2[20];

    printf(" Input the source file name : ");
    scanf("%s", fname1);

    fptr1 = fopen(fname1, "r");
    if (fptr1 == NULL)
    {
        printf(" File does not found or error in opening.!!");
        exit(1);
    }
    printf(" Input the new file name : ");
    scanf("%s", fname2);
    fptr2 = fopen(fname2, "w");
    if (fptr2 == NULL)
    {
        printf(" File does not found or error in opening.!!");
        fclose(fptr1);
        exit(2);
    }
    while (1)
    {
        ch = fgetc(fptr1);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fputc(ch, fptr2);
        }
    }
    printf(" The file %s  copied successfully in the file %s. \n\n", fname1, fname2);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}

// TODO-5 Write a program in C to replace a specific line with another text in a file.
#include <stdio.h>
#include <string.h>
#define MAX 256

int main()
{
    FILE *fptr1, *fptr2;
    int lno, linectr = 0;
    char str[MAX], fname[MAX];
    char newln[MAX], temp[] = "temp.txt";

    printf(" Input the file name to be opened : ");
    fgets(fname, MAX, stdin);
    fname[strlen(fname) - 1] = '\0';
    fptr1 = fopen(fname, "r");
    if (!fptr1)
    {
        printf("Unable to open the input file!!\n");
        return 0;
    }
    fptr2 = fopen(temp, "w");
    if (!fptr2)
    {
        printf("Unable to open a temporary file to write!!\n");
        fclose(fptr1);
        return 0;
    }
    /* get the new line from the user */
    printf(" Input the content of the new line : ");
    fgets(newln, MAX, stdin);
    /* get the line number to delete the specific line */
    printf(" Input the line no you want to replace : ");
    scanf("%d", &lno);
    lno++;
    // copy all contents to the temporary file other except specific line
    while (!feof(fptr1))
    {
        strcpy(str, "\0");
        fgets(str, MAX, fptr1);
        if (!feof(fptr1))
        {
            linectr++;
            if (linectr != lno)
            {
                fprintf(fptr2, "%s", str);
            }
            else
            {
                fprintf(fptr2, "%s", newln);
            }
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    remove(fname);
    rename(temp, fname);
    printf(" Replacement done successfully..!! \n");
    return 0;
}

//? Preprocessor directives:
// TODO-1. Define a variable inside a header file, say “custom.h”, use this header file in your program
// and then print the value of the variable defined in custom.h.
#include <stdio.h>
#include "custom.h"
int main()
{
    printf("%d\n", var); // var is defined in custom.h
    return 0;
}

// TODO-2. Using #define, declare a value, say PI = 3.14, and use it to calculate area of a circle, given the radius.
#include <stdio.h>
#define PI 3.14
int main()
{
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("\nArea of the circle is: %f\n", PI * r * r); // var is defined in custom.h
    return 0;
}

// TODO-3. Write a for loop to print numbers from 1 to 20. The for loops has to be written as a multiline macro
// Ex: forlo(1, 20); => prints numbers from 1 to 20; forlo here is a multiline macro
#include <stdio.h>
#define LOOP(n)                  \
    for (int i = 1; i <= n; i++) \
    {                            \
        printf("%d\t", i);       \
    }

int main()
{
    LOOP(20);
    printf("\n");
    return 0;
}

// TODO-4. Give example usage of conditional compilation using #ifdef, #ifndef and #undef.
#include <stdio.h>
#define X 56
// #ifndef Sachin
// #error Sachin not found!
// #endif
#define Y 156
#ifdef Y
#undef Y
#endif

#if X > 50
#undef X
#define X 36
#elif X < 50
#undef X
#define X 50
#else
#undef X
#define X 100
#endif

int main()
{
    printf("X= %d\n", X);

    return 0;
}
// TODO-5. Concat two numbers to create a single number using ## operator:
#include <stdio.h>
#define concat(x, y) x##y
int main()
{
    int xy = 56;
    printf("%d\n", concat(x, y));
}
// Ex: 11882, 619 => 61911882

//? Storage Class Specifier:
// TODO-1. Using Static keyword, keep a count of the number of times a function was called.
#include <stdio.h>
int fun()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d ", fun());
    printf("\n");
    return 0;
}

// TODO-2. Using extern keywords, declare variable in another file(second.c) , and in another file(first.c), utlize that variable.
#include <stdio.h>
#include "ext.c"
extern int var;
int main()
{
    printf("%d\n", var);
    return 0;
}

// TODO-3. Can two functions have variables with the same name? Give example of they both have different scopes.
#include <stdio.h>
int fun1();
int fun2();

int main()
{
    printf("x from fun1(): %d\n", fun1());
    printf("x from fun2(): %d\n", fun2());

    return 0;
}
int fun1()
{
    int x = 9;
    return x;
}
int fun2()
{
    int x = 6;
    return x;
}