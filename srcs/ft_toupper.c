/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:33:53 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/18 03:40:20 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
*
* The toupper() function converts a lower-case letter to the corresponding 
* upper-case letter.  The argument must be representable as an unsigned char 
* or the value of EOF.
*
* Although the toupper() function uses the current locale, the toupper_l() 
* function may be passed a locale directly. See xlocale(3) for more information.
*
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

/*
*
* The ft_strtoupper() function...
*
*/

char	*ft_strtoupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
