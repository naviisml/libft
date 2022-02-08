/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:33:34 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_strrev() function takes a char *str as argument and reverses
* the string in place.
*
*/

char	*ft_strrev(char *str)
{
	int		strlen;
	int		i;
	char	temp;

	i = 0;
	strlen = ft_strlen(str) - 1;
	while (i < strlen)
	{
		temp = str[i];
		str[i] = str[strlen];
		str[strlen] = temp;
		strlen--;
		i++;
	}
	return (str);
}
