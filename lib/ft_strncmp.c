/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:27:17 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:11:24 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function compares two strings and returns
** the difference if there is any.
** It only compares at most "n" bytes of strings "s1" and "s2".
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char str1;
	unsigned char str2;

	while (n-- > 0)
	{
		str1 = (unsigned char)*s1++;
		str2 = (unsigned char)*s2++;
		if (str1 != str2)
			return (str1 - str2);
		if (str1 == '\0')
			return (0);
	}
	return (0);
}
