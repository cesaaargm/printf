/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:29:40 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/15 11:59:56 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_element(char element)
{
	int count;

	if (element == 'c')
		count += print_char(va_arg(ap, int));
	else if (element == 's')
		count += print_string(va_arg(ap, char));
	else if
}



int ft_printf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format) ;
	count = 0;
	while (*format )
	{
		if (*format == '%')
			count += print_element(*(++format), ap);
		else	
			write
		
	}
	
}