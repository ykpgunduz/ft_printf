/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:22:48 by yagunduz          #+#    #+#             */
/*   Updated: 2025/08/20 19:22:11 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;
	int		char_count;

	printed_chars = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			char_count = ft_type(&args, *(++format));
			if (char_count < 0)
				ft_error();
			printed_chars += char_count;
		}
		else if (*format != '%')
			printed_chars += write(1, format, 1);
		else
			return ((write(1, "Error", 5)));
		format++;
	}
	va_end(args);
	return (printed_chars);
}
