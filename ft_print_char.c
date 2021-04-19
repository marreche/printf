/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:41:04 by marreche          #+#    #+#             */
/*   Updated: 2021/04/16 15:06:31 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_print_char(char *str, va_list argptr)
{
	char	c;

	c = va_arg(argptr, int);
	ft_putchar(c);
	return (str);
}
