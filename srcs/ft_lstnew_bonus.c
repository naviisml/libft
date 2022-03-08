/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:11:45 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_lstnew() function allocates (with malloc(3)) and returns 
* a new element. The variable ’content’ is initialized with the 
* value of the parameter ’content’. The variable ’next’ is 
* initialized to NULL.
*
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*item;

	item = (t_list *)malloc(sizeof(t_list));
	if (!item)
		return (0);
	item->content = content;
	item->next = NULL;
	return (item);
}
