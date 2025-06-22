/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:26:52 by esduman           #+#    #+#             */
/*   Updated: 2025/06/22 14:24:43 by esduman          ###   ########.fr       */
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
