/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamberger12 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:05:46 by bamberger12       #+#    #+#             */
/*   Updated: 2025/10/03 14:05:46 by bamberger12      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	main(void)
{
	printf("Mi funcion: %d\n", ft_printf("%+x soy edu\n", +42));
	printf("printf original: %d\n", printf("%+x soy edu\n", +42));
}
