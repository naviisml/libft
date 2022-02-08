/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:33:25 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_strnstr() function locates the first occurrence of c 
* (converted to a char) in the string pointed to by s. The 
* terminating null character is considered to be part of 
* the string; therefore if c is `\0', the functions locate 
* the terminating `\0'.
*
*/

char	*ft_strnstr(const char *origin_haystack, const char *needle, size_t n)
{
	char	*haystack;
	size_t	i;
	size_t	p;

	haystack = (char *)origin_haystack;
	if (ft_strlen(needle) == 0)
		return (haystack);
	i = 0;
	while (haystack[i] && i < n)
	{
		p = 0;
		while (haystack[i + p] == needle[p] && needle[p] && i + p < n)
		{
			p++;
		}
		if (needle[p] == 0)
		{
			return ((haystack + i));
		}
		i++;
	}
	return (0);
}
