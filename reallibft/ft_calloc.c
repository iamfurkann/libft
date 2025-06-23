/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:38:12 by esduman           #+#    #+#             */
/*   Updated: 2025/06/23 13:38:13 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new_value;

	new_value = malloc(size * nmemb);
	if (!new_value)
		return (NULL);
	ft_memset(new_value, 0, nmemb * size);
	return (new_value);
}
