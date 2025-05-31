/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:26:52 by esduman           #+#    #+#             */
/*   Updated: 2025/05/31 05:10:14 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t number, size_t size)
{
	void	*new_value;

	new_value = malloc(size * number);
	if (!new_value)
		return (NULL);
	ft_memset(new_value, 0, number * size);
	return (new_value);
}
