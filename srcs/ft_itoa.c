/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:35:16 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
 * The ft_itoc_base() functions converts the int i to the base
 * specified by int base.
 */
char	ft_itoc_base(int i, int base)
{
	char	c;

	if ((i % base) > 9)
		c = (i % base) + 55;
	else
		c = (i % base) + 48;
	return (c);
}

/*
 * The ft_itoa_base() functions converts the int128 nbr to the base
 * specified by int base.
 */
char	*ft_itoa_base(__int128 nbr, int base)
{
	char		*str;
	int			index;
	int			len;
	__int128	tmp;

	index = 0;
	len = ft_floor(nbr);
	str = malloc(len + 1);
	if (!str)
		return (0);
	if (nbr < 0)
		tmp = -nbr;
	else if (nbr == 0)
		return (ft_strdup("0"));
	else
		tmp = nbr;
	while (tmp != 0)
	{
		str[index++] = ft_itoc_base(tmp, base);
		tmp /= base;
	}
	if (nbr < 0)
		str[index++] = '-';
	str[index] = '\0';
	return (ft_strrev(str));
}

/*
 * The ft_itoa() functions converts the int i to base 10, ft_itoa()
 * is considered a wrapper for ft_itoa_base(__int128 nbr, int base)
 */
char	*ft_itoa(int nbr)
{
	return (ft_itoa_base((__int128)nbr, 10));
}
