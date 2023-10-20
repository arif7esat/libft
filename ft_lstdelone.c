/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:03:03 by agungor           #+#    #+#             */
/*   Updated: 2023/10/19 15:26:41 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void    custom_free(void *ptr)
{
	free(ptr);
    ptr = NULL;
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*
int main(void)
{
    t_list *deneme1;
    t_list *deneme2;
    t_list *deneme3;

    deneme1 = ft_lstnew("arif 1esat");
    deneme2 = ft_lstnew("arif 2esat");
    deneme3 = ft_lstnew("arif 3esat");
    deneme1->next = deneme2;
    deneme2->next = deneme3;

    printf("%s", (char *)deneme2->content);
    ft_lstdelone(deneme2, custom_free);

    if (!deneme2)
        printf("bellek boşaldı");
    // burada elinde olmamış olan bir fonkiyonu yazdırmaya çalışıyoruz freelediğim bu fonksiyonu kullandığımda hata alıyorum.

    return 0;
}
*/
