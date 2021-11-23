/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 08:34:31 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The ft_strdup() function allocates sufficient memory 
* for a copy of the string s1, does the copy, and returns 
* a pointer to it.  The pointer may subsequently be used 
* as an argument to the function free(3).
*
* If insufficient memory is available, NULL is returned and 
* errno is set to ENOMEM.
*
*/

char	*ft_strdup(const char *str)
{
	char	*dst;
	size_t	strlen;

	strlen = ft_strlen(str) + 1;
	dst = (char *)malloc(strlen * sizeof(char));
	if (!dst)
		return (0);
	dst = ft_memcpy(dst, str, strlen);
	return ((char *)dst);
}
