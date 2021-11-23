/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 01:42:10 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/02 13:38:52 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
*
* The ft_isalnum() function tests for any character for which 
* ft_isalpha(3) or ft_isdigit(3) is true. The value of the 
* argument must be representable as an unsigned char or the value of EOF.
*
* The ft_isalnum() function returns zero if the character 
* tests false and returns non-zero if the character tests true.
*
*/

int	ft_isalnum(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
		return (1);
	else if (arg >= '0' && arg <= '9')
		return (1);
	else
		return (0);
}
