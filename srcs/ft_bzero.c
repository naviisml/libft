/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 01:41:44 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The ft_bzero() function writes n zeroed bytes to the string s.
* If n is zero, ft_bzero() does nothing.
*
*/

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		*(char *)(str + i) = 0;
		i++;
		n--;
	}
}
