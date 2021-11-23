/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:35:38 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/02 13:39:28 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
*
* The ft_isdigit() function tests for a decimal digit character.  
* Regardless of locale, this includes the following characters only:
* 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
*
* The ft_isnumber() function behaves similarly to ft_isdigit(), 
* but may recognize additional characters, depending on the current 
* locale setting. The value of the argument must be representable 
* as an unsigned char or the value of EOF.
*
*/

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	else
		return (0);
}
