/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:56:44 by esduman           #+#    #+#             */
/*   Updated: 2025/05/31 16:35:20 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_arr;
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	new_arr = (char *)malloc((s1 + s2) + 1);
	if (!new_arr)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		new_arr[i] = s1[i++];
	}
	j = 0;
	while (j < s2len)
	{
		new_arr[i + j] = s2[j++];
	}
	return (new_arr);
}
