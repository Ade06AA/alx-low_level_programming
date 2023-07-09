#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    n = get_bit(100, 5);
    printf("%d\n", n);
    n = get_bit(100, 4);
    printf("%d\n", n);
    n = get_bit(100, 0);
    printf("%d\n", n);
    return (0);
}
