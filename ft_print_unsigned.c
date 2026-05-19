/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:38:45 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/15 17:46:40 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	char		c;
	int			total;

	total = 0;
	if (nb >= 10)
		total += ft_print_unsigned(nb / 10);
	c = (nb % 10) + '0';
	total += ft_print_char(c);
	return (total);
}
