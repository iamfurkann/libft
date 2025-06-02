/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:27:37 by esduman           #+#    #+#             */
/*   Updated: 2025/06/02 03:50:02 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	f_find(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

int	f_get_first(char const *s1, char const *set)
{
	int	first;

	first = 0;
	while (s1[first] && f_find(s1[first], set))
		first++;
	return (first);
}

int	f_get_last(char const *s1, char const *set, int first)
{
	int	last;

	last = ft_strlen((char *)s1);
	while (last > first && f_find(s1[last - 1], set))
		last--;
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_arr;
	int		first;
	int		last;
	int		i;

	first = f_get_first(s1, set);
	last = f_get_last(s1, set, first);
	new_arr = (char *)malloc((last - first) + 1);
	if (!new_arr)
		return (NULL);
	i = 0;
	while (last > first)
	{
		new_arr[i] = s1[first];
		first++;
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
