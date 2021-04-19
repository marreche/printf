/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:20:28 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 11:47:06 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bzero deletes "n" bytes of memory starting at "s", by writing zeroes.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
