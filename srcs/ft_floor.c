/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_floor.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 15:54:59 by nismail       #+#    #+#                 */
/*   Updated: 2021/12/07 02:43:31 by navi          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
 * The ft_floor() functions return the largest integral value 
 * less than or equal to x.
 */
int	ft_floor(__int128 nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len += 1;
	}
	return (len);
}
