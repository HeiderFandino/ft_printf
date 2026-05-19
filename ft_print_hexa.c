/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 12:15:27 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/19 11:07:47 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int nb, char *base)
{
	int		total;
	char	c;

	total = 0;
	if (nb >= 16)
		total += ft_print_hexa(nb / 16, base);
	c = base[nb % 16];
	total += ft_print_char(c);
	return (total);
}
