/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:15:35 by erwang            #+#    #+#             */
/*   Updated: 2019/04/10 22:25:19 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_lib.h"

t_list		*ft_create_elem(void *data)
{
	t_list *element;

	element = malloc(sizeof(t_list));
	if (list)
	{
		element->data = data;
		element->next = NULL;
	}
	return (element);
}
