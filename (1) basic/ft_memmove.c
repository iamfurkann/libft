/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42.istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:40:09 by esduman           #+#    #+#             */
/*   Updated: 2025/05/24 23:40:09 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void  *dest, const void *src, size_t n)
{
    unsigned char *ptr;
    const unsigned char *s;

    if (!dest && !src)
        return (NULL);

    ptr = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (ptr < s)
    {
        while(n--)
            *ptr++ = *s++;
    }
    else 
    {
        while (n--)
            ptr[n] = s[n];
    }
    return (dest);
}