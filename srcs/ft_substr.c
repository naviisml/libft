/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:33:44 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_substr() function allocates (with malloc(3)) and returns a 
* substring from the string ’s’. The substring begins at index 
* ’start’ and is of maximum size ’len’.
*
*/

char	*ft_substr(char const *str, unsigned int index, size_t len)
{
	size_t	str_len;
	char	*tmp;

	if (!str)
		return (0);
	str_len = ft_strlen(str);
	if (str_len < index)
		return (ft_strdup(""));
	str_len = ft_strlen(str + index);
	if (str_len < len)
		len = str_len;
	tmp = malloc(len + 1);
	if (!tmp)
		return (0);
	ft_strlcpy(tmp, str + index, len + 1);
	return (tmp);
}
