/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:35:34 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/02 13:39:41 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* 
*
* The ft_isprint() function tests for any printing character, 
* including space (` ').  The value of the argument must 
* be representable as an unsigned char or the value of EOF.
*
*/

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	else
		return (0);
}
