/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joerober <joerober@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:31:27 by joerober          #+#    #+#             */
/*   Updated: 2022/11/24 11:44:40 by joerober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*space;

	space = (t_list *)malloc(sizeof(*space));
	if (!space)
		return (NULL);
	space->content = content;
	space->next = NULL;
	return (space);
}
