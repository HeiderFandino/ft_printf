/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:07:08 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/15 17:30:57 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int nb)
{
	char	c;
	int		total;

	total = 0;
	if (nb == -2147483648)
		return (ft_print_str("-2147483648"));
	else if (nb < 0)
	{
		return (ft_print_char('-') + ft_print_nbr(-nb));
	}
	else
	{
		if (nb >= 10)
			total += ft_print_nbr(nb / 10);
		c = (nb % 10) + '0';
		total += ft_print_char(c);
		return (total);
	}
}
