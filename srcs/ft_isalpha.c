/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:35:45 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/02 13:39:04 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
*
* The ft_isalpha() function tests for any character for which ft_isupper(3) 
* or ft_islower(3) is true. The value of the argument must be representable 
* as an unsigned char or the value of EOF.
*
*/

int	ft_isalpha(int arg)
{
	if (arg >= 'a' && arg <= 'z')
		return (1);
	else if (arg >= 'A' && arg <= 'Z')
		return (1);
	else
		return (0);
}
