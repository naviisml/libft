/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:41 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	split_free(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (0);
}

static char	**split_str(char *str, char c, char **list)
{
	int		list_index;
	int		i;

	list_index = 0;
	while (*str)
	{
		i = 0;
		if (*str != c)
		{
			while (str[i] != c && str[i])
				i++;
			list[list_index] = ft_substr(str, 0, i);
			if (!list[list_index])
				split_free(list);
			str += i;
			list_index++;
		}
		else if (*str == c)
			while (*str == c && *str)
				str++;
	}
	list[list_index] = 0;
	return (list);
}

static char	**split_alloc(char *str, char c)
{
	char	**list;
	int		list_len;

	list_len = 0;
	while (*str)
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
			list_len++;
		str++;
	}
	list = (char **)malloc((list_len + 1) * sizeof(char *));
	return (list);
}

/*
*
* The ft_split() function allocates (with malloc(3)) and returns 
* an array of strings obtained by splitting ’s’ using the character 
* ’c’ as a delimiter. The array must be ended by a NULL pointer.
*
*/

char	**ft_split(char const *str, char c)
{
	char	**list;

	if (!str)
		return (0);
	list = split_alloc((char *)str, c);
	if (!list)
		return (0);
	list = split_str((char *)str, c, list);
	return (list);
}
