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

int	main(void)
{
	float a = 0;

	ft_memset(&a, 66, 4);
	ft_memset(&a, 132, 3);
	ft_memset(&a, 163, 2);
	ft_memset(&a, 215, 1);
	printf("%f", a);

	ft_strnstr();
	return (0);
}
