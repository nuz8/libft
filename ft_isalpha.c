/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:43:23 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/06 19:53:09 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);

int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	c;
	
// 	c = 'R';
// 	printf("C function:		%d\n", isalpha(c));
// 	printf("Libft funciton:	%d\n", ft_isalpha(c));
// 	printf("Delta = %d\n", isalpha(c) - ft_isalpha(c));
// 	return (0);
// }