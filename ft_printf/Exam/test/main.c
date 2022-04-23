/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 02:01:39 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/20 02:02:37 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

void    ft_hello(void)
{
    ft_printf("\n");
    printf("-%d\n", printf("Hello World!\n"));
    ft_printf("-%d\n", ft_printf("Hello World!\n"));
    ft_printf("\n");
    printf("-%d\n", printf("s |---| %s \n", "BNK"));
    ft_printf("-%d\n", ft_printf("s |---| %s \n", "BNK"));
    ft_printf("\n");
}

void    ft_decimal(int a)
{
    printf("-%d\n", printf("d |---| %d\n", a));
    ft_printf("-%d\n", ft_printf("d |---| %d\n", a));
    ft_printf("\n");
}

void    ft_xx(int a)
{
    printf("-%d\n", printf("x |---| %x\n", a));
    ft_printf("-%d\n", ft_printf("x |---| %x\n", a));
    ft_printf("\n");
    printf("-%d\n", printf("%% \n"));
    ft_printf("-%d\n", ft_printf("%% \n"));
    ft_printf("\n");
}

int main(void)
{
    int a;

    a = 48;
    ft_hello();
    ft_decimal(a);
    ft_xx(a);
    a = -2147483648;
    ft_hello();
    ft_decimal(a);
    ft_xx(a);

	ft_printf("ft_printf() => ");
    ft_printf("String: %s, Decimal: %d, Hexadecimal: %x / %x\n", "42Exam", 42, 42, -42);

    printf("printf() => ");
    printf("String: %s, Decimal: %d, Hexadecimal: %x / %x\n", "42Exam", 42, 42, -42);

    printf("\n============================\n\n");

    ft_printf("ft_printf() => ");
    ft_printf("Magic %s is %d\n", "number", 42);

    printf("printf() => ");
    printf("Magic %s is %d\n", "number", 42);

    printf("\n============================\n\n");

    ft_printf("ft_printf() => ");
    ft_printf("Hexadecimal for %d is %x\n", 42, 42);

    printf("printf() => ");
    printf("Hexadecimal for %d is %x\n", 42, 42);
    return (0);
}
