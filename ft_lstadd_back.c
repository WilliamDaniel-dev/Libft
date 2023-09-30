/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:29:54 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/03 23:28:25 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
        return(NULL)
    while(lst->next)
        lst = lst->next;
    return (lst);
}

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *aux;
    
    if (!*lst)
    {
        *lst = new;
        return;
    }
    aux = ft_lstlast(*lst);
    aux->next = new;    
}