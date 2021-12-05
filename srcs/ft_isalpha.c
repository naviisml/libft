/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:35:45 by nismail       #+#    #+#                 */
/*   Updated: 2021/12/05 17:39:56 by navi          ########   odam.nl         */
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
		return (2);
	else if (arg >= 'A' && arg <= 'Z')
		return (1);
	else
		return (0);
}
