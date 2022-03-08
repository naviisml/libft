/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:19 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_strlcat() functions copy and concatenate strings with the same input 
* parameters and output result as snprintf(3).  They are designed to be safer, 
* more consistent, and less error prone replacements for the easily misused 
* functions strncpy(3) and strncat(3).
*
* ft_strlcat() take the full size of the destination buffer and guarantee 
* NUL-termination if there is room.  Note that room for the NUL should be 
* included in dstsize.
* 
* strlcat() appends string src to the end of dst.  It will append at most 
* dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless 
* dstsize is 0 or the original dst string was longer than dstsize 
* (in practice this should not happen as it means that either dstsize is 
* incorrect or that dst is not a proper string).
*
* If the src and dst strings overlap, the behavior is undefined.
*
*/

size_t	ft_strlcat(char *dst, const char *str, size_t n)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	char	*src;

	src = (char *)str;
	if (n == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if ((n > 0 && (n - 1) < dst_len))
		return (src_len + n);
	i = 0;
	while ((dst_len + i) < (n - 1) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if ((dst_len + i) == n && dst_len < n)
		dst[n - 1] = 0;
	else
		dst[dst_len + i] = 0;
	return (src_len + dst_len);
}
