/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:04:20 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:17:43 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function returns a pointer to the last
** ocurrence of "c" in the string "str".
*/

char	*ft_strrchr(const char *str, int c)
{
	const char	*p;
	const char	*found;
	char		d;

	d = (char)c;
	found = 0;
	if (c == '\0')
		return (ft_strchr(str, '\0'));
	while ((p = ft_strchr(str, c)) != NULL)
	{
		found = p;
		str = p + 1;
	}
	return (char *)found;
}
