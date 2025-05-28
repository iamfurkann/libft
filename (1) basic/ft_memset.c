/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42.istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:07:39 by esduman           #+#    #+#             */
/*   Updated: 2025/05/24 22:07:39 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr; 
    size_t i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (s);
}

#include <stdio.h>

int main(void)
{
    float arr =0;
    //ft_memset(&arr, 255, 4);
    ft_memset(&arr, 66, 4);
    ft_memset(&arr, 132, 3);
    ft_memset(&arr, 128, 2);
    printf("%.2f\n ", arr);
    //printf("%d \n", arr[1]);
    //printf("%d \n", arr[2]);

}