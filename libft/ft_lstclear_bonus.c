/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 10:49:22 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 14:51:26 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *elem_to_del_next;
	t_list *elem_to_del;

	if (!lst || !*lst)
		return ;
	elem_to_del = (*lst)->next;
	ft_lstdelone((*lst), del);
	while (elem_to_del->next)
	{
		elem_to_del_next = elem_to_del->next;
		ft_lstdelone((*lst), del);
		elem_to_del = elem_to_del_next;
	}
	del(elem_to_del->content);
	free(elem_to_del);
	*lst = NULL;
}
