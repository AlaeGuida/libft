/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:16:03 by aguida            #+#    #+#             */
/*   Updated: 2022/10/10 12:47:54 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	i;

	if (!dest && size == 0)
		return ft_strlen(src);
	n = ft_strlen(dest);
	i = 0;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	
	while (src[i] != '\0' && n + 1 < size)
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void){
    char *dest = NULL;
    char src[10]= "1";

    char *dest1 = NULL;

	printf("%s, %zu", dest1, strlcat(dest1, src, 0));
    printf("%s, %zu\n", dest, ft_strlcat(dest, src, 0));    
    

}
*/