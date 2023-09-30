/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:37:10 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/11 23:26:13 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_lstadd_front(t_list **list, t_list *new)
{
    new->next = *list;
    list = new;
}

void    ft_lstadd_front(t_list **list, t_list *new)
{
    new->content = new;
    new->next = *list;
    list = new;
}
