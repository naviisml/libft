/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:33:49 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/18 03:40:26 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
*
* The tolower() function converts an upper-case letter to the corresponding 
* lower-case letter.  The argument must be representable as an unsigned char 
* or the value of EOF.
*
* Although the tolower() function uses the current locale, the tolower_l() 
* function may be passed a locale directly. See xlocale(3) for more information.
*
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

/*
*
* The ft_strtolower() function...
*
*/

char	*ft_strtolower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}
