/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:25:12 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/15 13:32:18 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstnew(void *content)
{
    t_list *new;
    
    new = malloc(sizeof(t_list));
    if (!new)
        return;
    new->content = content;
    new->next = NULL;
    return(new);
}
