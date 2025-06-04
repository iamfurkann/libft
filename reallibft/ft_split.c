/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42.istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 23:07:28 by esduman           #+#    #+#             */
/*   Updated: 2025/06/04 23:07:28 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	f_cword(char const *s, char c, int *cword)
{
	int	f_word;

	*cword = 0;
	f_word = 0;
	while (*s)
	{
		if (*s != c && !f_word)
		{
			f_word = 1;
			(*cword)++;
		}
		else if (c == *s)
			f_word = 0;
		s++;
	}
}

static	void	f_getwlength(char const *s, char c, int *len)
{
	char *pos = ft_strchr(s, c);
    if (pos)
        *len = pos - s;
    else
        *len = ft_strlen((char *)s);
}

static	int	f_free(char **new_arr, int i)
{
	while (i--)
		free(new_arr[i]);
	free(new_arr);
	return (0);
}

static	int	f_setword(char const *s, char c, char **new_arr)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			f_getwlength(s, c, &len);
			new_arr[i] = ft_substr(s, 0, len);
			if (!new_arr[i])
				return (f_free(new_arr, i));
			s += len;
			i++;
		}
	}
	new_arr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		cword;
	char	**new_arr;

	if (!s)
		return (NULL);
	f_cword(s, c, &cword);
	new_arr = (char **)malloc((cword + 1) * sizeof(char *));
	if (!new_arr)
		return (NULL);
	if (!f_setword(s, c, new_arr))
		return (NULL);
	return (new_arr);
}
