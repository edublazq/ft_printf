/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamberger12 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:32:20 by bamberger12       #+#    #+#             */
/*   Updated: 2025/10/03 13:32:21 by bamberger12      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "../Libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_format(va_list vargs, char *c, int i);
void	ft_print_ptr(void *ptr);
void	ft_print_ptr_base(uintptr_t nb, char *base);
void	ft_print_to_base(unsigned int nb, char *base);
void	ft_print_unsigned(unsigned int nb);
void	ft_print_signed_number(int nbr);

#endif
