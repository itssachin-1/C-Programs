#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char **argv)
{

    printf("CHAR_BIT: %d CHAR_MIN - CHAR_MAX    :   %d  to  %d\n", CHAR_BIT, CHAR_MIN, CHAR_MAX);
    printf("INT_BIT:    INT_MIN - INT_MAX       :   %d  to  %d\n", INT_MIN, INT_MAX);
    printf("LONG_BIT:   LONG_MIN - LONG_MAX     :   %ld to  %ld\n", LONG_MIN, LONG_MAX);
    printf("SCHAR_BIT:  SCHAR_MIN - SCHAR_MAX   :   %d  to  %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("SHRT_BIT:   SHRT_MIN - SHRT_MAX     :   %d  to  %d\n", SHRT_MIN, SHRT_MAX);

    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int)UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long)ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short)USHRT_MAX);

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float)FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float)FLT_MIN);

    printf("-FLT_MAX    :   %g\n", (float)-FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float)-FLT_MIN);

    printf("DBL_MAX     :   %g\n", (double)DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double)DBL_MIN);

    printf("-DBL_MAX     :  %g\n", (double)-DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG);

    return 0;
}