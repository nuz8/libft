/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:39:45 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/07 13:25:33 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
    while (*str != 0)
    {
        len++;
        str++;
    }
	return len;
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	str = "Hello world! This is a very good string!";
	printf("C function:		%lu\n", strlen(str));
	printf("Libft funciton:	%lu\n", ft_strlen(str));
	printf("Delta = %lu\n", strlen(str) - ft_strlen(str));
	return (0);
}
