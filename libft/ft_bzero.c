/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:51:49 by aguida            #+#    #+#             */
/*   Updated: 2022/10/03 12:47:16 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *str = s;
    size_t i;
    i = 0;
    while(i < n){
        str[i] = '0';
        i++;
    }
}
/*
#include <stdio.h>
int main(){
    
    char str[]="hello";
    ft_bzero(str, 10);
    printf("%s", str);
}*/