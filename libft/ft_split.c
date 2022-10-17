/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:04:09 by aguida            #+#    #+#             */
/*   Updated: 2022/10/17 16:41:11 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(const char *str, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
		{
			while (str[i] != '\0' && str[i] != c)
				i++;
			n++;
		}
	}
	return (n);
}

static int	word_len(const char *str, int i, char c)
{
	int	n;

	n = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
		n++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		n;
	int		y;

	arr = (char **)ft_calloc((words_count(s, c) + 1) , (sizeof(char *)));
	if (!arr)
		return (NULL);
	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			arr[n] = (char *)malloc((word_len(s, 0, c) + 1)*(sizeof(char)));
			if (!arr[n])
				return (NULL);
			y = 0;
			while (*s && *s != c)
				arr[n][y++] = *s++;
			arr[n++][y] = '\0';
		}
	}
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	char **split = ft_split("hello 1337 Med", ' ');
	int i = 0;
	while (i < 4)
	{
		printf("word %d: %s\n", i, split[i]);
		i++;
	}
}
*/