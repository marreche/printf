/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:29:22 by marreche          #+#    #+#             */
/*   Updated: 2021/04/16 15:06:37 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_print_string(char *str, va_list argptr)
{
	str = (char *)va_arg(argptr, char *);
	ft_putstr(str);
	return (str);
}
