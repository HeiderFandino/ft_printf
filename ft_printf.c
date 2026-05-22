/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:21:46 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/22 13:27:03 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_percent(const char *format, int *i, va_list args)
{
	int	result;

	if (format[*i + 1] == '\0')
		return (-1);
	result = ft_handle_format(format[*i + 1], args);
	if (result == -1)
		return (-1);
	*i += 2;
	return (result);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		total;
	int		result;

	i = 0;
	total = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			total += ft_print_char(format[i]);
			i++;
		}
		else
		{
			result = ft_handle_percent(format, &i, args);
			if (result == -1)
				return (va_end(args), -1);
			total += result;
		}
	}
	va_end(args);
	return (total);
}
