/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:35 by nismail       #+#    #+#                 */
/*   Updated: 2022/01/30 00:47:20 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
 * The ft_strcmp() functions lexicographically compare 
 * the null-terminated strings s1 and s2.
 */
int	ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return ((int)(unsigned char)*str1 - (unsigned char)*str2);
}
