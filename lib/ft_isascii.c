/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:06:03 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:15:47 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function that checks if "c" is a 7-bit unsigned char
** value that fits into the ascii table.
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
