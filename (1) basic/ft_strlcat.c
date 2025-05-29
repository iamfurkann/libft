/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42.istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:02:10 by esduman           #+#    #+#             */
/*   Updated: 2025/05/25 00:02:10 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	int	slen;
	size_t	dlen;
	size_t	i;

	slen = ft_strlen(src);
	dlen = 0;
	i = 0;
	while (dlen < size && dest[dlen])
		dlen++;

	if (dlen >= size)
		return size + slen;

	i = 0;
	while ((dlen + i + 1) < size && src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}

	if (dlen + i < size)
		dest[dlen + i] = '\0';

	return (dlen + slen);
}