/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:19:04 by marreche          #+#    #+#             */
/*   Updated: 2021/04/15 17:50:26 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "lib/libft.h"
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
char	*ft_print_string(char *str, va_list argptr);
char	*ft_print_char(char *str, va_list argptr);
char	ft_check_identifier(char *str, va_list argptr);

#endif
