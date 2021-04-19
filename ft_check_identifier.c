/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_identifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:16:59 by marreche          #+#    #+#             */
/*   Updated: 2021/04/16 15:06:17 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_check_identifier(char *str, va_list argptr)
{
	if (*str == 's')
		ft_print_string(str, argptr);
	if (*str == 'c')
		ft_print_char(str, argptr);
	return (0);
}
