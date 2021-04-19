/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:05:28 by marreche          #+#    #+#             */
/*   Updated: 2021/02/22 12:28:19 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The itoa function is the opposite of atoi, therefore
** it converts an integer into a string. I use recursivity
** in order to break down gradually a number, dividing it by
** 10 and finding the modulus to gather each individual number.
** I then join these numbers to form a string.
*/

static	int	ft_nlen(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	i = ft_nlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (!(ptr = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ptr[i--] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		ptr[i] = '0' + (n % 10);
		n = (n / 10);
		i--;
	}
	return (ptr);
}
