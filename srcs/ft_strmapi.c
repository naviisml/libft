/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:32:59 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_strmapi() function applies the function ’f’ to each character of 
* the string ’s’ , and passing its index as first argument to create a 
* new string (with malloc(3)) resulting from successive applications of ’f’.
*
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*list;

	if (!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	list = malloc(len * sizeof(char) + 1);
	if (!list)
		return (0);
	i = 0;
	while (s[i])
	{
		list[i] = f(i, s[i]);
		i++;
	}
	list[i] = '\0';
	return (list);
}
