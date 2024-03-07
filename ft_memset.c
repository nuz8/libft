/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:27:51 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/07 16:08:02 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void*	ft_memset(void *str, int c, size_t n);

void*	ft_memset(void *str, int c, size_t n)
{
	unsigned char	asc;
	int				i;

	asc = c;
	i = 0;
	while (i < n)
	{
		str[i] = asc;
		// str++;
		i++;
	}
	return (str);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[50];
	// int		s;

	strcpy(str, "This is string.h library function");
	puts(str);
	memset(str, 65, 4);
	puts(str);

	// s = 852146;
	// printf("%d\n", s);
	// memset(s, 57, 3);
	// printf("%d\n", s);
	
	// printf("C function:		%d\n", 5);
	// printf("Libft funciton:	%lu\n", ft_memset(str));
	// printf("Delta = %lu\n", memset(str) - ft_memset(str));
	return (0);
}
