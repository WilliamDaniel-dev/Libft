/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:56:09 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/15 13:33:09 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    while(lst)
    {
        lst = lst->next;
        size++;
    }
    return (size);
}