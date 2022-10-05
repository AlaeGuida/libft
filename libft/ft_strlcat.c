/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:16:03 by aguida            #+#    #+#             */
/*   Updated: 2022/10/04 13:43:55 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcat( char *dest, const char *src, size_t size)
{
    size_t n;
    size_t d;
    
    if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	n = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && n + 1 < size)
	{
		dest[n] = src[d];
		n++;
		d++;
	}
	dest[n] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
/*
#include <string.h>
#include <stdio.h>

int main(){
    char src[] = "hellooo";
    char dest[10]= "1337";

    char src1[] = "hellooo";
    char dest1[10]= "1337";

    printf("%zu, %s\n", ft_strlcat(dest, src, 7), dest);    
    printf("%zu , %s", strlcat(dest1, src1, 7), dest1);

}
*/