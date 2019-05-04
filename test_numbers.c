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

    printf("\n\t---INTEGERS---\n");
    
    ft_printf("%020.10d | ", -12345);
    printf("%020.10d\n", -12345);

    ft_printf("%20.10d | ", -12345);
    printf("%20.10d\n", -12345);

    ft_printf("%0 20.3d | ", -12345);
    printf("%0 20.3d\n", -12345);

    printf("\n\t---INTEGERS WITHOUT PR---\n");

    ft_printf("%020d | ", -12345);
    printf("%020d\n", -12345);

    printf("\n\t---UNSIGNED---\n");
    
    ft_printf("%020.10u | ", -12345);
    printf("%020.10u\n", -12345);
    ft_printf("%20.10u | ", -12345);
    printf("%20.10u\n", -12345);

    //printf("\n\t---BOX---\n");
    
    printf("\n\t---OCTAL---\n");

    ft_printf("1 |%#020o | ", 0);
    printf("%#020o\n", 0);
    ft_printf("2 |%#0020o | ", 12345);
    printf("%#020o\n", 12345);

    ft_printf("3 |%#020.o | ", 0);
    printf("%#020.o\n", 0);
    ft_printf("4 |%#020.o | ", 12345);
    printf("%#020.o\n", 12345);

    ft_printf("5 |%#020.0o | ", 12345);
    printf("%#020.0o\n", 12345);

    ft_printf("6 |%#020.2o | ", 0);
    printf("%#020.2o\n", 0);
    ft_printf("7 |%#020.2o | ", 12345);
    printf("%#020.2o\n", 12345);
    
    ft_printf("8 |%#020.10o | ", 0);
    printf("%#020.10o\n", 0);
    ft_printf("9 |%#020.10o | ", 12345);
    printf("%#020.10o\n", 12345);
    
    printf("\n\t---HEXA---\n");

    ft_printf("1 |%#020x | ", 0);
    printf("%#020x\n", 0);
    ft_printf("2 |%#020x | ", 12345);
    printf("%#020x\n", 12345);
  
    ft_printf("3 |%#020.x | ", 0);
    printf("%#020.x\n", 0);

    ft_printf("4 |%#020.0x | ", 0);
    printf("%#020.0x\n", 0);
    
    ft_printf("5 |%#020.0x | ", 12345);
    printf("%#020.0x\n", 12345);

    ft_printf("6 |%#020.2x | ", 0);
    printf("%#020.2x\n", 0);
    ft_printf("7 |%#020.2x | ", 12345);
    printf("%#020.2x\n", 12345);

    ft_printf("8 |%#020.10x | ", 0);
    printf("%#020.10x\n", 0);
    ft_printf("9 |%#020.10x | ", 12345);
    printf("%#020.10x\n", 12345);

    
    printf("\n\t---BIG HEXA---\n");
    ft_printf("1 |%#20X | ", 123456);
    printf("%#20X\n", 123456);

    return (0);
}