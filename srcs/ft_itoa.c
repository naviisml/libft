/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:35:16 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_itoa_subfunc(long nbr, int is_negative)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(ft_floor(nbr) + 1);
	if (!str)
		return (0);
	while (nbr > 0)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	if (is_negative == 1)
	{
		str[i] = '-';
		str[i + 1] = '\0';
	}
	else
	{
		str[i] = '\0';
	}
	return (ft_strrev(str));
}

/*
*
* The ft_itoa() function allocates (with malloc(3)) and 
* returns a string representing  the integer received as 
* an argument. Negative numbers must be handled.
*
*/

char	*ft_itoa(int n)
{
	long	nbr;

	nbr = (long)n;
	if (n == 0 || !n)
		return (ft_strdup("0"));
	if (nbr < 0)
		return (ft_itoa_subfunc(-nbr, 1));
	return (ft_itoa_subfunc(nbr, 0));
}
