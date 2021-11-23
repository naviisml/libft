/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_floor.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 15:54:59 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/18 05:51:36 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The floor() functions return the largest integral value 
* less than or equal to x.
*
*/

int	ft_floor(long nbr)
{
	int	n;

	n = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		n += 1;
	}
	if (nbr >= 0 && nbr <= 9)
		return (n + 1);
	while (nbr > 0)
	{
		nbr /= 10;
		n++;
	}
	return (n);
}
