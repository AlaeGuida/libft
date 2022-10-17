/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:41:51 by aguida            #+#    #+#             */
/*   Updated: 2022/10/15 15:30:05 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, const char *str)
{
	while (*str != '\0')
		if (c == *str++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	n;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	n = ft_strlen(s1);
	while (check_set(s1[i], set) == 0)
		i++;
	str = ft_strdup("");
	if (i == ft_strlen(s1))
	{
		if (!str)
			return (NULL);
		else
			return (str);
	}
	while (check_set(s1[n - 1], set) == 0)
		n--;
	str = ft_substr(s1, i, n - i);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
    char str[] = "aaaa 13 a 37 aaa";
    char set[] = "a";

    printf("%s\n", ft_strtrim(str, set));
}
*/