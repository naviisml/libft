/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:33:19 by nismail       #+#    #+#                 */
/*   Updated: 2022/01/20 13:52:43 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The ft_strncmp() functions lexicographically compare the 
* null-terminated strings s1 and s2.
*
* The ft_strncmp() function compares not more than n characters.
* Because ft_strncmp() is designed for comparing strings rather 
* than binary data, characters that appear after a `\0' character 
* are not compared.
*
*/

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0)
		return (0);
	while (*str1 && *str1 == *str2 && (n - 1) > 0)
	{
		str2++;
		str1++;
		n--;
	}
	return ((int)(unsigned char)*str1 - (unsigned char)*str2);
}
