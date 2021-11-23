/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:53 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/18 02:03:37 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The ft_putchar_fd() function writes the character 
* c to the output stream pointed to by fd.
*
*/

void	ft_putchar_fd(char c, int fd)
{
	if (ft_isascii(c))
		write(fd, &c, 1);
	else
		ft_putchar_fd('0', fd);
}