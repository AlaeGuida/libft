/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:42:02 by aguida            #+#    #+#             */
/*   Updated: 2022/10/15 15:33:39 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	i = 0;
	if (!s)
		return (0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len && start < s_len && s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
    char str[] = "hello 1337";
    int start = 12;
    int length = 10;
    
    char *result = ft_substr(str, start, length);
    printf("%s\n", result);
}*/