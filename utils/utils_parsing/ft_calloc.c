/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 19:20:48 by malouazz          #+#    #+#             */
/*   Updated: 2026/11/23 19:21:04 by malouazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	result = malloc(nmemb * size);
	if (!result && (nmemb * size != 0))
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}
