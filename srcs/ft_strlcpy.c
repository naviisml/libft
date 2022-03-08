/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:15 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* ft_strlcpy() take the full size of the destination buffer and guarantee 
* NUL-termination if there is room.  Note that room for the NUL should be 
* included in dstsize.
*
* strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
* NUL-terminating the result if dstsize is not 0.
* 
* If the src and dst strings overlap, the behavior is undefined.
*
*/

size_t	ft_strlcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (n > 0)
	{
		while (i < (n - 1) && ((char *)src)[i])
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
		((char *)dst)[i] = 0;
	}
	return (src_len);
}
