/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 11:13:22 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 09:48:46 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_list_elem;

	new_list = NULL;
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		if (!(new_list_elem = ft_lstnew(f(lst->content))))
			ft_lstclear(&new_list, del);
		ft_lstadd_back(&new_list, new_list_elem);
		lst = lst->next;
	}
	if (!(new_list_elem = ft_lstnew(f(lst->content))))
		ft_lstclear(&new_list, del);
	ft_lstadd_back(&new_list, new_list_elem);
	return (new_list);
}
