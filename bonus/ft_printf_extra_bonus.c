/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_extra_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamberger12 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:00:37 by bamberger12       #+#    #+#             */
/*   Updated: 2025/10/03 14:00:38 by bamberger12      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_print_signed_number(int nbr)
{
	if (nbr > 0)
		ft_putchar_fd('+', 1);
	ft_putnbr_fd(nbr, 1);
}

void	ft_print_space(int nbr)
{
	if (nbr > 0)
		ft_putchar_fd(' ', 1);
	ft_putnbr_fd(nbr, 1);
}
