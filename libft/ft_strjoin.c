/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:12:46 by aguida            #+#    #+#             */
/*   Updated: 2022/10/14 12:32:03 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!s1 || !s2)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[n];
		i++;
		n++;
	}
	n = 0;
	while (s2[n] != '\0' || !s2)
	{
		str[i++] = s2[n++];
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "hello";
	char str2[] = "1337";

	printf("%s\n", ft_strjoin(str, str2));
}*/