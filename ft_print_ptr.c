/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:25:43 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/16 13:32:41 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	int	total;

	total = 0;
	if (ptr == 0)
		return (ft_print_str("(nil)"));
	total += ft_print_str("0x");
	total += ft_print_hex_long(ptr, "0123456789abcdef");
	return (total);
}
