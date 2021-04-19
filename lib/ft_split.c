/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:06:03 by marreche          #+#    #+#             */
/*   Updated: 2021/04/09 17:04:19 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** We first create a function to count the number
** of bytes which form all the words we have in the string "s".
** And we store this number in the counter "counter".
** We will need this in order to allocate sufficient memory to
** then display all the strings.
*/

static int		ft_wordcount(char const *s, char c)
{
	unsigned int	i;
	int				counter;

	i = 0;
	counter = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (counter);
}

/*
** We need a function to copy a string, and doing so
** within a max length.
*/

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

/*
** We then need a function to return a pointer to the
** new duplicated string extracted from the original source
** string.
*/

char		*ft_strndup(const char *s, size_t n)
{
	char			*str;

	if (!(str = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

/*
** The ft_split function returns an array of strings obtained
** by splitting the source string "s" using the character "c"
** as a delimiter. We allocate memory as well, and we have to
** terminate the array with a null pointer.
*/

char			**ft_split(char const *s, char c)
{
	char	**as;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(as = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c)) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			as[k++] = ft_strndup(s + j, i - j);
	}
	as[k] = NULL;
	return (as);
}
