/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:58:30 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/06 20:54:39 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c);

int ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	c;
	
// 	c = 'y';
// 	printf("C function:		%d\n", isalnum(c));
// 	printf("Libft funciton:	%d\n", ft_isalnum(c));
// 	printf("Delta = %d\n", isalnum(c) - ft_isalnum(c));
// 	return (0);
// }