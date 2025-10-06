/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamberger12 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:31:48 by bamberger12       #+#    #+#             */
/*   Updated: 2025/10/03 13:31:49 by bamberger12      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_format_extra(va_list vargs, char *c, int i)
{
	if (*c == '+')
	{
		c += 1;
		if (*c == 'd' || *c == 'i')
		{
			ft_print_signed_number(va_arg(vargs, int));
			return (i + 3);
		}
		else
			ft_format(vargs, c , i);
	}
	else if(*c == ' ')
	{
		c += 1;
		if (*c == 'd' || *c == 'i')
		{
			ft_print_space(va_arg(vargs, int));
			return (i + 3);
		}
		else
			ft_format(vargs, c, i);
	}
	else
		return (-1);
	return (i + 1);
}

int	ft_format(va_list vargs, char *c, int i)
{
	if (*c == 'c')
		ft_putchar_fd(va_arg(vargs, int), 1);
	else if (*c == 's')
		ft_putstr_fd(va_arg(vargs, char *), 1);
	else if (*c == 'd' || *c == 'i')
		ft_putnbr_fd(va_arg(vargs, int), 1);
	else if (*c == 'u')
		ft_print_unsigned(va_arg(vargs, unsigned int));
	else if (*c == 'x')
		ft_print_to_base(va_arg(vargs, unsigned int), "0123456789abcdef");
	else if (*c == 'X')
		ft_print_to_base(va_arg(vargs, unsigned int), "0123456789ABCDEF");
	else if (*c == '%')
		ft_putchar_fd('%', 1);
	else if (*c == 'p')
		ft_print_ptr(va_arg(vargs, void *));
	else if (*c == ' ' || *c == '+' || *c == '#')
		return (ft_format_extra(vargs, c, i));
	else
		return (-1);
	return (i + 2);
}

int	ft_printf(const char *str, ...)
{
	va_list		vargs;
	int			i;

	va_start(vargs, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			i = ft_format(vargs, (char *)&str[i + 1], i);
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
		if (!i)
			break ;
		
	}
	va_end(vargs);
	return (i);
}
