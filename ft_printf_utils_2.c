/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:13:16 by edblazqu          #+#    #+#             */
/*   Updated: 2025/10/07 12:13:17 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int nb)
{
	int	digits;

	digits = 0;
	ft_putnbr_fd(nb, 1);
	if (nb < 0)
		digits++;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		digits++;
	}
	return (digits);
}
