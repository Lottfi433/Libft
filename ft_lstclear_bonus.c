/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:26:15 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/11/07 12:34:37 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	temp = *lst;
	while (*lst != NULL)
	{
		temp = *lst;
		del(temp->content);
		*lst = (*lst)->next;
		free (temp);
	}
	*lst = NULL;
}
