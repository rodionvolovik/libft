/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 20:19:51 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/01 20:27:38 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

int		main(void)
{
	t_stack	*head;
	t_stack	*elem;
	char	*s;

	s = ft_strdup("Hello");
	head = push(head, s);
	printf("head %s\n", head->content);
	free(s);
	s = ft_strdup("Good bye");
	head = push(head, s);
	printf("head %s\n", head->content);
	printf("head->next %s\n", head->next->content);
	free(s);
	elem = pop(&head);
	printf("elem %s\n", elem->content);
	printf("head %s\n", head->content);
	printf("head->next %s\n", head->next->content);
	return (0);
}
