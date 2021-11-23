/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:39 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/23 07:36:19 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The ft_strchr() function locates the first occurrence of the null-terminated 
* string needle in the null-terminated string haystack.
*
*/

char	*ft_strchr(const char *str, int c)
{
	int	n;

	n = 0;
	if (!str)
		return (0);
	while (str[n])
	{
		if ((unsigned char)str[n] == (unsigned char)c)
		{
			return ((char *)(str + n));
		}
		n++;
	}
	if ((unsigned char)str[n] == (unsigned char)c)
	{
		return ((char *)(str + n));
	}
	return (0);
}
