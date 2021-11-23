/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:33:39 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_cinstr(char c, const char *set)
{
	while (*set && c != *set)
		set++;
	if (*set != 0)
		return (0);
	return (1);
}

/*
*
* The ft_strtrim() function allocates (with malloc(3)) and returns a 
* copy of ’s1’ with the characters specified in ’set’ removed from the 
* beginning and the end of the string.
*
*/

char	*ft_strtrim(char const *str, char const *set)
{
	int		str_start;
	int		len;
	char	*tmp;

	if (!str)
		return (0);
	if (!set)
		return (ft_strdup(""));
	str_start = 0;
	len = ft_strlen(str);
	while (ft_cinstr(str[str_start], set) == 0)
		str_start++;
	if (str_start >= len)
		return (ft_strdup(""));
	while (ft_cinstr(str[len - 1], set) == 0)
		len--;
	tmp = ft_substr(str, str_start, len - str_start);
	if (!tmp)
		return (0);
	return (tmp);
}
