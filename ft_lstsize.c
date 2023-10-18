/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agungor < agungor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:06:20 by agungor           #+#    #+#             */
/*   Updated: 2023/10/18 03:40:20 by agungor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst && ++count)
		lst = lst->next;
	return (count);
}
/*
|node1 | next1  |  -->
				|node2 | next2  |  -->
								|node3 | next3  |  -->
												|node4 | next4  |  -->
																|node5 | next5|
*/