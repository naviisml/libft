/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:47 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_putnbr_fd() function writes the int *nbr
* to the output stream pointed by fd
*
*/

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		if (-(nbr / 10) > 0)
		{
			ft_putnbr_fd(-(nbr / 10), fd);
			ft_putnbr_fd(-(nbr % 10), fd);
		}
		else
			ft_putnbr_fd(-(nbr % 10), fd);
	}
	else if (nbr > 9)
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putnbr_fd((nbr % 10), fd);
	}
	else if (nbr < 10)
		ft_putchar_fd(nbr + '0', fd);
}
