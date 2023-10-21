/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:02:24 by agungor           #+#    #+#             */
/*   Updated: 2023/10/21 12:35:05 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new = ft_lstnew(new_content);
		if (!new)
		{
			del(new_content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}

--------------------
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*result_lst;
	void	*content;

	if (!lst || !f || !del)
		return (0);
	result_lst = 0;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			free(content);
			ft_lstclear(&result_lst, del);
			return (0);
		}
		ft_lstadd_back(&result_lst, node);
		lst = lst->next;
	}
	return (result_lst);
}

/*
calisan

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
	{
		ft_lstiter(lst, del);
		return (NULL);
	}
	new_list->next = ft_lstmap(lst->next, f, del);
	return (new_list);
}

void	my_del(void *content)
{
	free(content);
}

void	*custom_toupper1(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return ((void *)str);
}

int	main(void)
{
	t_list	*old_list1;
	t_list	*old_list2;
	t_list	*old_list3;
	t_list	*finish_lst;

	old_list1 = NULL;
	old_list2 = NULL;
	finish_lst = NULL;
	// listelerin malloc ile oluşturup alan için kullanılması durumunu lstnew fonksiyonu ile yaptım.
	old_list1 = ft_lstnew(ft_strdup("arif esat"));
	old_list2 = ft_lstnew(ft_strdup("sude nermin"));
	old_list3 = ft_lstnew(ft_strdup("kelebek"));
	// listeleri birbirine bağlama
	old_list1->next = old_list2;
	old_list2->next = old_list3;
	finish_lst = ft_lstmap(old_list1, custom_toupper1, my_del);
	while (finish_lst)
	{
		printf("%s\n", (char *)finish_lst->content);
			// Her öğeyi yeni bir satırda yazdırın.
		finish_lst = finish_lst->next;
	}
	ft_lstclear(&old_list1, my_del);
		// Bellek sızıntısını önlemek için listenin temizlenmesi.
	return (0);
}
*/