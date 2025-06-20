/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:26:52 by esduman           #+#    #+#             */
/*   Updated: 2025/06/19 01:12:54 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new_value;

	if (nmemb != 0 && size > 18446744073709551615UL / nmemb)
		return (NULL);
	new_value = malloc(size * nmemb);
	if (!new_value)
		return (NULL);
	ft_memset(new_value, 0, nmemb * size);
	return (new_value);
}
