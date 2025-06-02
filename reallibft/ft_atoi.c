/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:40:07 by esduman           #+#    #+#             */
/*   Updated: 2025/06/02 07:07:12 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	f_is_np(const char *nptr, int *i)
{
	while ((nptr[*i] >= 9 && nptr[*i] <= 13) || nptr[*i] == 32)
		(*i)++;
}

static void	f_is_sign(const char *nptr, int *i, int *sign)
{
	if (nptr[*i] == '-' || nptr[*i] == '+')
	{
		if (nptr[*i] == '-')
			*sign = -1;
		(*i)++;
	}
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	f_is_np(nptr, &i);
	f_is_sign(nptr, &i, &sign);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = (sum * 10) + (nptr[i] - '0');
		i++;
	}
	return (sum * sign);
}
