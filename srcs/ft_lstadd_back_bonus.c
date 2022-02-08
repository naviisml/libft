/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:32:15 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_lstadd_back() function adds the element 
* ’new’ at the end of the list.
* 
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_item;

	if (lst && new)
	{
		if (*lst == NULL)
		{
			*lst = new;
		}
		else
		{
			last_item = ft_lstlast(*lst);
			if (last_item)
				last_item->next = new;
		}
	}
}
