/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42.istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:10 by esduman           #+#    #+#             */
/*   Updated: 2025/05/25 00:02:10 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	f_findlen(char *dest, size_t *dlen, size_t size)
{
	while (*dlen < size && dest[*dlen])
		(*dlen)++;
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;

	slen = ft_strlen((char *)src);
	dlen = 0;
	f_findlen(dest, &dlen, size);
	if (dlen >= size)
		return (size + slen);
	i = 0;
	while ((dlen + i + 1) < size && src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dest[dlen + i] = '\0';
	return (dlen + slen);
}
