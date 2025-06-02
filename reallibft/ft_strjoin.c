/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:56:44 by esduman           #+#    #+#             */
/*   Updated: 2025/06/02 06:11:44 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f_add(char const *s, char *new_arr, size_t *i)
{
	size_t	j;

	j = 0;
	while (s[j])
	{	
		new_arr[*i] = s[j];
		(*i)++;
		j++;
	}
}

int	f_strsum(char const *s1, char const *s2)
{
	return (ft_strlen((char *)s1) + ft_strlen((char *)s2));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_arr;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	new_arr = (char *)malloc(f_strsum(s1, s2) + 1);
	if (!new_arr)
		return (NULL);
	i = 0;
	f_add(s1, new_arr, &i);
	f_add(s2, new_arr, &i);
	new_arr[i] = '\0';
	return (new_arr);
}
