/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:40:03 by esduman           #+#    #+#             */
/*   Updated: 2025/06/23 13:40:03 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*ptr;
	const unsigned char		*s;

	if (!dest && !src)
		return (NULL);
	ptr = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*ptr++ = *s++;
	return (dest);
}
