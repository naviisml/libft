/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_inttohex.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/18 02:26:06 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/19 09:33:15 by navi          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

/*
*
* The ft_floor_ull() functions return the largest integral value 
* less than or equal to x.
*
*/

int	ft_floor_ull(unsigned long long nbr)
{
	int	n;

	n = 0;
	if (nbr > 0 && nbr < 10)
		return (n + 1);
	while (nbr > 0)
	{
		nbr /= 10;
		n++;
	}
	return (n);
}

/*
*
* The ft_inttohex() function takes a long long as
* parameter and converts the decimal value to
* the hexadecimal value in base 16.
*
*/

char	*ft_inttohex(unsigned long long decimal)
{
	char	*hex;
	int		index;

	hex = malloc(ft_floor_ull(decimal) + 1);
	index = 0;
	while (decimal != 0)
	{
		if ((decimal % 16) > 9)
			hex[index] = (decimal % 16) + 55;
		else
			hex[index] = (decimal % 16) + 48;
		decimal /= 16;
		index++;
	}
	hex[index] = '\0';
	hex = ft_strrev(hex);
	return (hex);
}
