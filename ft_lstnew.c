/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:56:42 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/17 16:33:48 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elm;

	new_elm = (t_list *)malloc(sizeof(t_list));
	if (!new_elm)
		return (0);
	new_elm->content = content;
	return (new_elm);
}
/*
int	main()
{
	int	data = 42;
	t_list	*new_element = ft_lstnew(&data);

	if (new_element)
		printf("Created a new list: %d", *((int *)(new_element->content)));
	else
		perror("Error created a new list");
	free(new_element);
	return (0);
} */
