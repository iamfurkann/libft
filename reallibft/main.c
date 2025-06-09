/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42.istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:06:30 by esduman           #+#    #+#             */
/*   Updated: 2025/06/09 17:06:30 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	my_func(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'A' && c <= 'Z')
		return (c + 32);
	if (i % 2 == 1 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*result;

	result = ft_strmapi("HeLLo WoRlD", my_func);
	if (!result)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("Original: %s\n", "HeLLo WoRlD");
	printf("Modified: %s\n", result);
	free (result);
	return (0);
}
