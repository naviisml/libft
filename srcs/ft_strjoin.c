/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:23 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_strjoin() function allocates (with malloc(3)) and returns 
* a new string, which is the result of the concatenation of ’s1’ and ’s2’.
*
*/

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*res;

	res = ft_strnjoin(str1, str2, ft_strlen(str2));
	if (!res)
		return (0);
	return (res);
}
