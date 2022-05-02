/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:21:33 by Maurice809        #+#    #+#             */
/*   Updated: 2022/05/02 21:46:59 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *input, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start (args, input);
	while (*input)
	{
		if (*input != '%')
			ft_putchar(*input, &count);
		else
			ft_args(args, *++input, &count);
		input++;
	}
	va_end (args);
	return (count);
}
