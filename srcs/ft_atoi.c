/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 01:41:34 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_split_trim(char *str)
{
	while (*str == '\t' || *str == '\n' || *str == ' '
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	return (str);
}

/*
*
* The ft_atoi() function converts the initial portion of the string 
* pointed to by str to int representation.
*
*/

int	ft_atoi(const char *str)
{
	long long	nbr;
	int			is_positive;

	is_positive = 1;
	nbr = 0;
	str = ft_split_trim((char *)str);
	if (*str == '-')
	{
		if (*(str + 1) == '+')
			return (0);
		is_positive = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if ((nbr * 10) + (*str - '0') > 2147483647 && is_positive == 1)
			return (-1);
		else if ((nbr * 10) + (*str - '0') > 2147483648 && is_positive == -1)
			return (0);
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (nbr * is_positive);
}
