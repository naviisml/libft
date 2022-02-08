/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnjoin.c                                      :+:    :+:            */
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

char	*ft_strnjoin(char const *str1, char const *str2, int n)
{
	int		len;
	int		str1_len;
	int		str2_len;
	char	*tmp;

	if (!str1 && !str2)
		return (ft_strdup(""));
	if (!str1)
		return (ft_strdup(str2));
	if (!str2)
		return (ft_strdup(str1));
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	if (str2_len > n)
		str2_len = n;
	len = str1_len + str2_len;
	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (0);
	ft_memmove(tmp, str1, str1_len);
	ft_memmove(tmp + str1_len, str2, str2_len);
	tmp[len] = 0;
	return (tmp);
}
