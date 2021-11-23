/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 08:37:57 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The ft_malloc(), ft_calloc(), ft_valloc(), ft_realloc(), 
* and ft_reallocf() functions allocate memory. The allocated 
* memory is aligned such that it can be used for any data type, 
* including AltiVec- and SSE-related types.  The free() function 
* frees allocations that were created via the preceding 
* allocation functions.
* 
* The ft_realloc() function tries to change the size of the 
* allocation pointed to by ptr to size, and returns ptr.
* If there is not enough room to enlarge the memory allocation 
* pointed to by ptr, ft_realloc() creates a new allocation, 
* copies as much of the old data pointed to by ptr as will 
* fit to the new allocation, frees the old allocation, and 
* returns a pointer to the allocated memory.  If ptr is NULL, 
* ft_realloc() is identical to.
*
*/

void	*ft_realloc(void *ptr, size_t size)
{
	void	*dst;

	if (ptr == 0)
		return (malloc(size));
	if (!size)
		return (ptr);
	dst = malloc(size);
	ft_memcpy(dst, ptr, size);
	return (dst);
}
