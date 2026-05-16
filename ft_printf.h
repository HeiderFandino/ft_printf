/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:46:46 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/16 13:38:29 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

int ft_print_char(char c);
int ft_print_str(char *str);
int ft_handle_format(char specifier, va_list args);
int ft_printf(char const *format, ...);
 	//AQUI VA LO ANTERIOR HECHO
        //AQUI VA LO ANTERIOR HECHO
        //AQUI VA LO ANTERIOR HECHO
        //AQUI VA LO ANTERIOR HECHO
        //AQUI VA LO ANTERIOR HECHOI
int	t_print_hexa(unsigned int nb, char *base);
int	ft_print_ptr(unsigned long ptr);
int	ft_print_hex_long(unsigned long nb, char *base);

#endif
