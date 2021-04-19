/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:08:27 by marreche          #+#    #+#             */
/*   Updated: 2021/04/13 13:42:31 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t size;

	size = 0;
	while (s2[size] && size < n)
	{
		s1[size] = s2[size];
		size++;
	}
	while (size < n)
	{
		s1[size] = '\0';
		size++;
	}
	return (s1);
}
