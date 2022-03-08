/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:35:13 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_memchr() function locates the first occurrence of c 
* (converted to an unsigned char) in string s
*
* The ft_memchr() function returns a pointer to the byte located, 
* or NULL if no such byte exists within n bytes.
*
*/

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*src;

	src = (unsigned char *)str;
	if (len == 0)
		return (0);
	while (len > 0)
	{
		if (*src == (unsigned char)c)
			return (src);
		src++;
		len--;
	}
	return (NULL);
}
