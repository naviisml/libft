/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:35:38 by nismail       #+#    #+#                 */
/*   Updated: 2022/03/08 16:58:48 by navi          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
 * The ft_isdigit() function tests for a decimal digit character.  
 * Regardless of locale, this includes the following characters only:
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *
 * The ft_isnumber() function behaves similarly to ft_isdigit(), 
 * but may recognize additional characters, depending on the current 
 * locale setting. The value of the argument must be representable 
 * as an unsigned char or the value of EOF.
 */

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	else
		return (0);
}

/*
 * The ft_isaldigit() function tests for a decimal digit character.
 * Regardless of locale, this includes the following characters only:
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 */

int	ft_isaldigit(char *str)
{
	while (*str != '\0')
	{
		if (ft_isdigit(str) == 0)
			return (0);
		str++;
	}
	return (1);
}
