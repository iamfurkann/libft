/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42.istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:13:10 by esduman           #+#    #+#             */
/*   Updated: 2025/05/25 00:13:10 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char ch;

    i = 0;
    ch = (char)c;
    while (s[i])
        i++;
    
    while(i >= 0)
    {
        if(s[i] == ch)
            return((char *)(s + i));
        i--;
    }

    return (NULL);
}