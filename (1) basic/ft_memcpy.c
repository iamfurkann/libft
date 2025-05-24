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

void *ft_memcpy(void *dest, void *src, size_t n)
{
    unsigned char *ptr;
    const unsigned char *s;
    size_t i;

    ptr = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        *ptr++ = *s++;
        i++;
    }
    return (dest);
}