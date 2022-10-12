/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:49:45 by aguida            #+#    #+#             */
/*   Updated: 2022/10/11 13:16:24 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	length;

	length = ft_strlen(str) + 1;
	s = malloc(sizeof(char) * length);
	if (!s)
		return (0);
	s = ft_memcpy(s, str, length);
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
    char src[] = "hello 1337";
    printf("%s", ft_strdup(src));
}*/