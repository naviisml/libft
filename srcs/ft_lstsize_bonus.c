/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:20:27 by nismail       #+#    #+#                 */
/*   Updated: 2022/02/08 16:49:06 by nismail       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
*
* The ft_lstsize() function counts the number of elements in a list.
*
*/

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp_lst;
	int		i;

	i = 0;
	tmp_lst = lst;
	while (tmp_lst)
	{
		tmp_lst = tmp_lst->next;
		i++;
	}
	return (i);
}
