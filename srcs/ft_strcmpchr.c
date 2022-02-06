/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmpchr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 04:14:45 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/06 13:49:46 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
 * The ft_strcmpchr() functions lexicographically compare 
 * the null-terminated string str with char c.
 */
int	ft_strcmpchr(const char *str, const char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
			return (1);
		i++;
	}
	return (0);
}
