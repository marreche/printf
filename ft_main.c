/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:47:20 by marreche          #+#    #+#             */
/*   Updated: 2021/04/16 15:06:22 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char *string;
	char c;

	c = 'T';
	string = "First trial string";

	ft_printf("%s\n", string);
	ft_printf("%c\n", c);
	return (0);
}
