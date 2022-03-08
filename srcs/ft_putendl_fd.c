/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:50 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_putendl_fd() function writes the string str to the 
* output stream pointed to by fd ending with a new line.
*
*/

void	ft_putendl_fd(char *str, int fd)
{
	int	len;

	len = ft_strlen(str);
	if (!str)
		write(fd, "(null)", 6);
	else
		write(fd, str, len);
	ft_putchar_fd('\n', fd);
}
