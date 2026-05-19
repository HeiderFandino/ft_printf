/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_long.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:30:45 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/19 11:02:15 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_long(unsigned long nb, char *base)
{
	int		total;
	char	c;

	total = 0;
	if (nb >= 16)
		total += ft_print_hex_long(nb / 16, base);
	c = base[nb % 16];
	total += ft_print_char(c);
	return (total);
}
