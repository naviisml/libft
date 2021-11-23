/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:56 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/02 13:42:18 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
*
* The ft_memset() function writes len bytes of value c 
* (converted to an unsigned char) to the string b.
*
* The ft_memset() function returns its first argument.
*
*/

void	*ft_memset(void *str, int c, int n)
{
	unsigned char	*new_str;
	int				i;

	new_str = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		new_str[i] = (unsigned char)c;
		i++;
	}
	return (new_str);
}
