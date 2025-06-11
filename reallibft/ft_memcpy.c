/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42.istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:34:37 by esduman           #+#    #+#             */
/*   Updated: 2025/05/24 22:34:37 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char			*ptr;
	const unsigned char		*s;

	ptr = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*ptr++ = *s++;
	return (dest);
}
