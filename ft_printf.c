/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:38:37 by marreche          #+#    #+#             */
/*   Updated: 2021/04/15 17:49:10 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	argptr;
	int		res;

	res = 0;
	va_start (argptr, format);
	while (format && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ft_check_identifier((char *)format, argptr);
		}
		else
			ft_putchar_fd(*format, 1);
		format++;
		res++;
	}
	va_end(argptr);
	return (res);
}
