/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknsteja <mknsteja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:34:57 by mknsteja          #+#    #+#             */
/*   Updated: 2024/10/01 09:22:05 by mknsteja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/ft_printf.h"
#include <stdio.h>


int main(void)
{
    // Testing strings
    printf("\n--- Testing strings ---\n");
    printf("Testing string: |%s|\n", "Hello, World!");
    ft_printf("ft_printf string: |%s|\n", "Hello, World!");
    printf("\n");

    printf("Testing string with width: |%10s|\n", "Hello");
    ft_printf("ft_printf string with width: |%10s|\n", "Hello");
    printf("\n");

    printf("Testing string with precision: |%.5s|\n", "Hello, World!");
    ft_printf("ft_printf string with precision: |%.5s|\n", "Hello, World!");
    printf("\n");

    printf("Testing string with left alignment: |%-10s|\n", "Hello");
    ft_printf("ft_printf string with left alignment: |%-10s|\n", "Hello");
    printf("\n");

    // New line for clarity
    printf("\n--- Testing characters ---\n");

    // Testing characters
    printf("Testing character: |%c|\n", 'A');
    ft_printf("ft_printf character: |%c|\n", 'A');
    printf("\n");

    printf("Testing character with width: |%5c|\n", 'A');
    ft_printf("ft_printf character with width: |%5c|\n", 'A');
    printf("\n");

    printf("Testing character with left alignment: |%-5c|\n", 'A');
    ft_printf("ft_printf character with left alignment: |%-5c|\n", 'A');
    printf("\n");

    // New line for clarity
    printf("\n--- Testing integers ---\n");

    // Testing integers
    printf("Testing integer: |%d|\n", 42);
    ft_printf("ft_printf integer: |%d|\n", 42);
    printf("\n");

    printf("Testing integer with width: |%10d|\n", 42);
    ft_printf("ft_printf integer with width: |%10d|\n", 42);
    printf("\n");

    printf("Testing integer with precision: |%.5d|\n", 42);
    ft_printf("ft_printf integer with precision: |%.5d|\n", 42);
    printf("\n");

    printf("Testing integer with zero padding: |%010d|\n", 42);
    ft_printf("ft_printf integer with zero padding: |%010d|\n", 42);
    printf("\n");

    printf("Testing integer with left alignment: |%-10d|\n", 42);
    ft_printf("ft_printf integer with left alignment: |%-10d|\n", 42);
    printf("\n");

    // New line for clarity
    printf("\n--- Testing unsigned integers ---\n");

    // Testing unsigned integers
    printf("Testing unsigned integer: |%u|\n", 42);
    ft_printf("ft_printf unsigned integer: |%u|\n", 42);
    printf("\n");

    printf("Testing unsigned integer with width: |%10u|\n", 42);
    ft_printf("ft_printf unsigned integer with width: |%10u|\n", 42);
    printf("\n");

    printf("Testing unsigned integer with precision: |%.5u|\n", 42);
    ft_printf("ft_printf unsigned integer with precision: |%.5u|\n", 42);
    printf("\n");

    // New line for clarity
    printf("\n--- Testing hexadecimal ---\n");

    // Testing hexadecimal
    printf("Testing hexadecimal (lowercase): |%x|\n", 255);
    ft_printf("ft_printf hexadecimal (lowercase): |%x|\n", 255);
    printf("\n");

    printf("Testing hexadecimal (uppercase): |%X|\n", 255);
    ft_printf("ft_printf hexadecimal (uppercase): |%X|\n", 255);
    printf("\n");

    printf("Testing hexadecimal with width: |%10x|\n", 255);
    ft_printf("ft_printf hexadecimal with width: |%10x|\n", 255);
    printf("\n");

    printf("Testing hexadecimal with precision: |%.5x|\n", 255);
    ft_printf("ft_printf hexadecimal with precision: |%.5x|\n", 255);
    printf("\n");

    // New line for clarity
    printf("\n--- Testing pointers ---\n");

    // Testing pointer
    int num = 42;
    printf("Testing pointer: |%p|\n", &num);
    ft_printf("ft_printf pointer: |%p|\n", &num);
    printf("\n");

    return 0;
}

