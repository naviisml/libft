/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:33:29 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_strchr() function locates the first occurrence of the null-terminated 
* string needle in the null-terminated string haystack.
*
* The ft_strrchr() function is identical to ft_strchr(), except it locates the 
* last occurrence of c.
*
*/

char	*ft_strrchr(const char *str, int c)
{
	int	n;

	n = ft_strlen(str);
	while (n > 0)
	{
		if ((unsigned char)str[n] == (unsigned char)c)
		{
			return ((char *)(str + n));
		}
		n--;
	}
	if ((unsigned char)str[n] == (unsigned char)c)
	{
		return ((char *)(str + n));
	}
	return (0);
}
