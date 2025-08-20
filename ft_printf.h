/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:22:39 by yagunduz          #+#    #+#             */
/*   Updated: 2025/08/20 19:22:08 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_type(va_list *args, const char format_specifier);
int		ft_putchar(char c);
int		ft_print_str(char *str);
int		ft_print_ptr(unsigned long number);
int		ft_putnbr_d(int number);
int		ft_putnbr_u(unsigned int number);
int		ft_print_hex(unsigned int number, const char format);
int		ft_print_hex_ptr(unsigned long number, const char format);
void	ft_error(void);

#endif
