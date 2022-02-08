/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrcmp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 04:14:45 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/06 13:49:46 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
 * The ft_chrncmp() functions lexicographically compare 
 * the null-terminated string str with char c.
 */
int	ft_chrncmp(const char *str, const char c, int n)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] != c)
			return (1);
		i++;
	}
	return (0);
}

/*
 * The ft_chrcmp() functions lexicographically compare 
 * the null-terminated string str with char c.
 */
int	ft_chrcmp(const char *str, const char c)
{
	return (ft_chrncmp(str, c, ft_strlen(str)));
}
