/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 04:07:44 by agungor           #+#    #+#             */
/*   Updated: 2023/10/19 16:54:03 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)           // pointerın adresini tutan pointer boş olabilir.
		return ;
	if (!(*lst))        // var olan list zaten NULL ise demek ki direkt new ekle ve bitir..:)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;   // bu ise sondaki elemanı bulan elemanın nextine new ' i atıyor ve bu kadar fonksiyon bitt...
}

/*
int main()
{
	t_list *list = (t_list *)malloc(sizeof(t_list));

	list -> content = "Merhaba";
	list -> next = (t_list *)malloc(sizeof(t_list));
	list -> next -> content = "Nasilsin";
	list ->next ->next = NULL;
}
*/
