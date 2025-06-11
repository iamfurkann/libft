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
	char *s = "          talhac talha yusuf";

	char **res = ft_split(s,' ');
	printf("%s", res[0]);
	printf("%s", res[1]);
	printf("%s", res[2]);
	return (0);
}
