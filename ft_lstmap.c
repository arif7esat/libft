/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:02:24 by agungor           #+#    #+#             */
/*   Updated: 2023/10/21 02:47:32 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"
#include <stdio.h>

void	*custom_toupper(void *new_content)
{
	int		i;
	char	*str;

	str = new_content;
	i = 0;
	while (*str)
	{
		*(str + i) = ft_toupper(*(str + i));
		i++;
	}
	return ((void *)str);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;
	void	*new_content;

	if (!lst || !f || !del)
		return (0);
	result = 0;
	while (lst)
	{
		new_content = f(lst->content);
		new = ft_lstnew(new_content);
		if (!new)
		{
			free(new_content);
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}

void	my_del(void *dolu)
{
	free(dolu);
}

int	main(void)
{
	t_list	*old_list1;
	t_list	*old_list2;
	t_list	*old_list3;
	t_list	*finish_lst;

	old_list1 = NULL;
	old_list2 = NULL;
	old_list3 = NULL;
	finish_lst = NULL;
	// listelerin malloc ile oluşturup alan için kullanılması durumunu lstnew fonksiyonu ile yaptım.
	old_list1 = ft_lstnew("arif esat");
	old_list2 = ft_lstnew("sude nermin");
	old_list3 = ft_lstnew("kelebek");
	// listeleri birbirine bağlama
	old_list1->next = old_list2;
	old_list2->next = old_list3;
	finish_lst = ft_lstmap(old_list1, custom_toupper, my_del);
	while (finish_lst)
	{
		printf("%s", (char *)finish_lst->content);
		finish_lst = finish_lst->next;
	}
}






#include "libft.h"
#include <stdio.h>

void	*custom_toupper(void *new_content)
{
	int		i;
	char	*str;

	str = new_content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (new_content);
}

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

void	del(void *dolu)
{
	free(dolu);
}

int	main(void)
{
	t_list	*old_list1;
	t_list	*finish_lst;

	old_list1 = NULL;
	//t_list *old_list2 = NULL;
	//t_list *old_list3 = NULL;
	finish_lst = NULL;
	old_list1 = ft_lstnew("arif esat");
	//old_list2 = ft_lstnew("sude nermin");
	//old_list3 = ft_lstnew("kelebek");
	//old_list1->next = old_list2;
	//old_list2->next = old_list3;
	finish_lst = ft_lstmap(old_list1, &custom_toupper, del);
	while (finish_lst)
	{
		printf("%s", (char *)finish_lst->content);
		finish_lst = finish_lst->next;
	}
	ft_lstclear(&old_list1,del);
}

--------------------
#include "libft.h"

void	*my_triple(void *number)
{
 	int	*nbr = (int *)malloc(sizeof(int));

	nbr = (int *)number;

	if (!nbr)
	{
		printf("Bellek Tahsisi Hatası");
		exit(1);
	}
	*nbr *= 3;
	return ((void *)nbr);
	
}
void	deler(void *my_free)
{
	free(my_free);
}

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
		if (!content)
			ft_lstclear(&result_lst, del);
		if (!content)
			return (0);
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


int main(void)
{
	t_list	*lst1 = 0;
	t_list	*lst2 = 0;
	t_list	*lst3 = 0;
	t_list	*temp = 0;

	void	*yas = {3, 7, 33};
	
	lst1 = ft_lstnew(yas++);
	lst2 = ft_lstnew(yas++);
	lst3 = ft_lstnew(yas++);

	lst1->next = lst2;
	lst2->next = lst3;

	temp = ft_lstmap(lst1, my_triple, deler);

	while (temp)
	{
		printf("%d",(int *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&lst1, deler);
}
*/