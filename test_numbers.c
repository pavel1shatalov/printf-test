#include "test.h"

int main()
{
    int *ptr = (int*)malloc(sizeof(int));
    int *not = NULL;

    printf("\n\t---POINTERS---\n");
    
    ft_printf("%-20p | ", ptr);
    printf("%-20p\n", ptr);

    ft_printf("%-20p | ", not);
    printf("%-20p\n", not);


    /* 
    BUGS:
    1)  PRECISION IS A PART OF A NUMBER
    2)  FLOATS S[0]
    3)  MANTISSA
    4)  LETTER NOTATION IN X
    */

    printf("\n\t---FLOATS---\n"); //Doesn't work with flags
    
    ft_printf("%0.2f | ", -12345.67890);
    printf("%0.2f\n", -12345.67890);

    ft_printf("%20.20f | ", 12345.67890);
    printf("%20.20f\n", 12345.67890);

    printf("\n\t---INTEGERS---\n");
    
    ft_printf("%020.10d | ", -12345);
    printf("%020.10d\n", -12345);

    printf("\n\t---BOX---\n");
    
    ft_printf("%b\n", 32);

    ft_printf("%#20o | ", 12345);
    printf("%#20o\n", 12345);

    ft_printf("%020x | ", 12345);
    printf("%020x\n", 12345);
    ft_printf("%#20X | ", 123456);
    printf("%#20X\n", 123456);

    return (0);
}