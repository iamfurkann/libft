/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42.istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:04:47 by esduman           #+#    #+#             */
/*   Updated: 2025/05/25 00:04:47 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c)
{
    int i;
    char ch;
    
    i = 0;
    ch = (char)c;

    while(s[i])
    {
        if (s[i] == ch)
            return ((char *)(s+ i));
        i++;
    }
    
    if (ch == '\0')
        return ((char *)(s + i));
        
    return (NULL);
}