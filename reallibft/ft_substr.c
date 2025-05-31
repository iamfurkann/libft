/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:05:20 by esduman           #+#    #+#             */
/*   Updated: 2025/05/31 16:23:54 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_value;
	size_t	length;

	length = strlen(s);
	if (start >= length)
	{
		new_value = (char *)ft_calloc(1, 1);
		if (!new_value)
			return (NULL);
		return (new_value);
	}
	if (len > length - start)
		len = length - start;
	new_value = (char *)malloc(len + 1);
	if (!new_value)
		return (NULL);
	while (len-- && *(char *)(s + start))
		*new_value++ = *(s + start++);
	*new_value = '\0';
	return (new_value);
}
