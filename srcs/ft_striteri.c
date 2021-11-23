/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:27 by nismail       #+#    #+#                 */
/*   Updated: 2021/10/30 14:07:24 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
*
* The ft_striteri() function applies the function f to each character of 
* the string passed as argument, and passing its index as first argument. 
* Each character is passed by address to f to be modified if necessary.
*
*/

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int	i;

	if (!str || !f)
		return ;
	i = 0;
	while (str[i])
	{
		f(i, str + i);
		i++;
	}
}
