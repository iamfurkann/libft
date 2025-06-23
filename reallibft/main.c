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
#include <unistd.h>
#include <string.h>
#include <ctype.h>

char strmapi_toupper(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    else
        return c;
}

void striteri_to_upper(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 'a' + 'A';
}

void del(void *content)
{
	free(content);
}

void	linked_list()
{
	t_list *list = NULL;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *node4;

	node1 = ft_lstnew(ft_strdup("esad"));
	node2 = ft_lstnew(ft_strdup("Nasilsin"));
	node3 = ft_lstnew(ft_strdup("Merhaba"));
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
	node4 = ft_lstnew(ft_strdup("esadson"));
	ft_lstadd_back(&list, node4);
	t_list *node = ft_lstnew(strdup("merhaba"));
	ft_lstdelone(node, del);
	node = ft_lstnew(ft_strdup("aaa"));
	ft_lstadd_front(&list, node);
	t_list *temp = list;
	while (temp)
	{
		printf("%s -> ", (char *)temp->content);
		temp = temp->next;
	}
	printf("NULL\n");
	printf("List length: %d\n", ft_lstsize(list));
	printf("Last node: %s\n", (char *)ft_lstlast(list)->content);
	ft_lstclear(&list, free);
	printf("List(last updated): \n");
	temp = list;
	while (temp)
	{
		printf("%s -> ", (char *)temp->content);
		temp = temp->next;
	}
	while(list)
	{
		t_list *tmp = list;
		list = list->next;
		free(tmp->content);
		free(tmp);
	}
}

int	main(void)
{
	char	dest[10];
	char	s1[100];
	char	s2[10];
	char	ptr[6];
	int		a;
	float	b;
	long	c;

	printf("-------------------------------------\n");
	printf("\t\t<PART1>");
	printf("\n-------------------------------------\n");
	printf("<ctype.h>\n");
	printf("ft_isalpha: %d\n", ft_isalpha('a'));
	printf("ft_isdigit: %d\n", ft_isdigit(2));
	printf("ft_isalnum: %d\n", ft_isalnum('3'));
	printf("ft_isascii: %d\n", ft_isascii('\n'));
	printf("ft_isprint: %d\n", ft_isprint(' '));
	printf("ft_toupper: %c\n", (char)(ft_toupper('m')));
	printf("ft_tolower: %c\n", (char)(ft_tolower('M')));
	printf("\n-------------------------------------\n");
	printf("\n<strings.h>\n");
	strcpy(ptr, "naber");
	printf("ft_bzero(value): %s\n", ptr);
	ft_bzero(ptr, sizeof(ptr));
	printf("ft_bzero(newValue): %s\n", ptr);
	printf("\n-------------------------------------\n");
	printf("\n<string.h>\n");
	printf("ft_strlen: %d\n", (int)(ft_strlen("merhaba")));
	printf("ft_strlcpy: %d\n", (int)(ft_strlcpy(dest, "merhaba", 11)));
	strcpy(dest, "naber");
	printf("ft_strlcat: %d\n", (int)(ft_strlcat(dest, "naber", 11)));
	printf("ft_strchr: %s\n", ft_strchr(dest, 'r'));
	printf("ft_strrchr: %s\n", ft_strrchr(dest, 'a'));
	strcpy(s1, "abcdef");
	strcpy(s2, "abc\375xx");
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 5));
	strcpy(s1, "Foo Bar Baz");
	strcpy(s2, "B");
	printf("ft_strnstr: %s\n", ft_strnstr(s1, s2, 5));
	printf("ft_strdup: %s\n", ft_strdup("naber"));
	printf("\n-------------------------------------\n");
	printf("\n<memset>\n");
	a = 4;
	ft_memset(&a, 255, 4);
	ft_memset(&a, 252, 1);
	printf("ft_memset(-4 value):%d\n", a);
	ft_bzero(&a, 4);
	ft_memset(&a, 28, 2);
	ft_memset(&a, 32, 1);
	printf("ft_memset(7200 value): %d\n", a);
	ft_memset(&b, 64, 4);
	ft_memset(&b, 200, 3);
	ft_memset(&b, 0, 2);
	printf("ft_memset(6.25 value): %.2f\n", b);
	c = 0;
	ft_memset(&c, 1, 5);
	ft_memset(&c, 5, 4);
	ft_memset(&c, 158, 3);
	ft_memset(&c, 233, 2);
	ft_memset(&c, 132, 1);
	printf("ft_memset(4389267844 value): %ld\n", c);
	printf("\n-------------------------------------\n");
	printf("\n<memcpy> ve <memmove>\n");
	strcpy(s1, "12345");
	strcpy(s2, "abcdefghi");
	printf("ft_memcpy: %s\n", (char *)(ft_memcpy(s2, s1, 5)));
	printf("      <overlap>\n");
	strcpy(s1, "12345678");
	printf("ft_memcpy(overlap): %s\n", (char *)(ft_memcpy(s1 + 2, s1, 5)));
	strcpy(s1, "12345678");
	printf("ft_memmove(not overlap): %s\n", (char *)(ft_memmove(s1 + 2, s1, 5)));
	printf("\n-------------------------------------\n");
	printf("\n<memchr>\n");
	strcpy(s1, "naber");
	printf("ft_memchr: %s\n", (char *)(ft_memchr(s1, 'a', 5)));
	printf("\n-------------------------------------\n");
	printf("\n<memcmp>\n");
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, sizeof(s1) + sizeof(s2)));
	printf("\n-------------------------------------\n");
	printf("\n<stdlib.h>\n");
	printf("ft_atoi: %d\n", ft_atoi("-123"));
	printf("ft_atoi(--123): %d\n", ft_atoi("--123"));
	printf("ft_calloc: %p\n", ft_calloc(6, sizeof(int)));
	printf("ft_calloc(overflow): %p\n", ft_calloc(18446744073709551615UL, 2));
	printf("-------------------------------------\n");
	printf("\t\t<PART2>");
	printf("\n-------------------------------------\n");
	printf("\n<ft_substr>\n");
	strcpy(s1, "naber");
	printf("src: %s, start: 2, len: 23\n", s1);
	printf("ft_substr: %s\n", ft_substr(s1, 2, 23));
	printf("\n-------------------------------------\n");
	printf("\n<ft_strjoin>\n");
	strcpy(s1, "merhaba");
	strcpy(s2, "dunya");
	printf("s1: %s, s2: %s\n", s1, s2);
	printf("ft_strjoin: %s\n", ft_strjoin(s1, s2));
	printf("\n-------------------------------------\n");
	printf("\n<ft_strtrim>\n");
	strcpy(s1, "arararrrnaberararar");
	strcpy(s2, "ar");
	printf("s1: %s, set: %s\n", s1, s2);
	printf("ft_strtrim: %s\n", ft_strtrim(s1, s2));
	printf("\n-------------------------------------\n");
	printf("\n<ft_split>\n");
	printf("ft_split: \n ");
	strcpy(s1, "merhaba nasılsın esad");
	char **ptr1 = ft_split(s1,' ');
	int i = 0;
	while (ptr1[i] != NULL)
	{
		printf("%s\n ", ptr1[i]);
		free(ptr1[i]);
		i++;
	}
	free(ptr1);
	printf("\n");
	printf("\n-------------------------------------\n");
	printf("\n<ft_itoa>\n");
	printf("ft_itoa: %s\n", ft_itoa(0));
	printf("\n-------------------------------------\n");
	printf("\n<ft_strmapi>\n");
	strcpy(s1, "merhaba");
	printf("s1: %s\n", s1);
	printf("ft_strmapi: %s\n", ft_strmapi(s1, strmapi_toupper));
	printf("\n-------------------------------------\n");
	printf("\n<ft_striteri>\n");
	strcpy(s1, "merhaba");
	printf("s1: %s\n", s1);
	ft_striteri(s1, striteri_to_upper);
	printf("ft_striteri: %s\n", s1);
	printf("-------------------------------------\n");
	printf("\t\t<BONUS>");
	printf("\n-------------------------------------\n");
	printf("\n<linkedList>\n");
	linked_list();
	return (0);
}
	