/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:04:02 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:04:00 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function writes "len" bytes of value "c"
** (converted to an unsigned char) into the string b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dst;

	dst = b;
	while (len-- > 0)
	{
		*dst++ = (unsigned char)c;
	}
	return (b);
}
