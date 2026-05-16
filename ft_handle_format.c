/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:00:47 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/16 13:38:08 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (specifier == '%')
		return (ft_print_char('%'));i
	//AQUI VA LO ANTERIOR HECHO
	//AQUI VA LO ANTERIOR HECHO
	//AQUI VA LO ANTERIOR HECHO
	//AQUI VA LO ANTERIOR HECHO
	//AQUI VA LO ANTERIOR HECHOI
	else if (specifier == 'x')
		return (ft_print_hexa(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (specifier == 'X')
		return (ft_print_hexa(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (specifier == 'p')
	return (ft_print_ptr((unsigned long)va_arg(args, void *)));
	else
		return (0);
}
