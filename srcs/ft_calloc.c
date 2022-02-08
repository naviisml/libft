/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 15:54:59 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
 * The ft_malloc(), ft_calloc(), ft_valloc(), ft_realloc(), 
 * and ft_reallocf() functions allocate memory. The allocated 
 * memory is aligned such that it can be used for any data type, 
 * including AltiVec- and SSE-related types.  The free() function 
 * frees allocations that were created via the preceding 
 * allocation functions.
 * 
 * The ft_calloc() function contiguously allocates enough space 
 * for count objects that are size bytes of memory each and 
 * returns a pointer to the allocated memory.  The allocated 
 * memory is filled with bytes of value zero.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
