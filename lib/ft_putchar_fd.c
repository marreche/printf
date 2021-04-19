/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 10:56:15 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:04:50 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is the same as ft_putchar except
** that this function requires the file descriptor as a parameter.
** So instead of automatically writing to the standard output,
** as ft_putchar does, we choose in which file descriptor we want to
** write.
** 0 = Standard input;
** 1 = Standard output;
** 2 = Standard error;
*/

void	ft_putchar_fd(char d, int fd)
{
	write(fd, &d, 1);
}
