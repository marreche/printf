/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:19:52 by marreche          #+#    #+#             */
/*   Updated: 2021/04/12 13:02:24 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_atoi converts a string to an integer.
** It has to take into account spare spaces as well as
** whether the value is either negative or positive.
** Atoi does not have to take into account the max and
** min value of an int.
*/

int		ft_atoi(const char *str)
{
	int res;
	int n;

	res = 0;
	n = 1;
	while ((*str == ' ') || (*str == '\t')
	|| (*str == '\n') || (*str == '\v')
	|| (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '-')
	{
		n = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = (*str - '0') + (res * 10);
		str++;
	}
	return (res * n);
}
