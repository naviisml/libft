/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:25:00 by nismail       #+#    #+#                 */
/*   Updated: 2021/11/16 21:28:57 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
*
* The ft_lstlast() function returns the last element of the list.
*
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_item;

	last_item = lst;
	while (last_item)
	{
		if (last_item->next)
			last_item = last_item->next;
		else
			return (last_item);
	}
	return (last_item);
}
