/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:35:07 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The ft_memcmp() function compares byte string s1 against byte string s2.
* Both strings are assumed to be n bytes long.
*
* The ft_memcmp() function returns zero if the two strings are identical, 
* otherwise returns the difference between the first two differing bytes 
* (treated as unsigned char values, so that `\200' is greater than `\0', 
* for example).  Zero-length strings are always identical.  This behavior 
* is not required by C and portable code should only depend on the sign 
* of the returned value.
*
*/

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*var1;
	char	*var2;

	if (n == 0)
		return (0);
	var1 = (char *)str1;
	var2 = (char *)str2;
	while (*var1 == *var2 && n - 1 > 0)
	{
		var1++;
		var2++;
		n--;
	}
	return ((int)*(unsigned char *)var1 - *(unsigned char *)var2);
}
