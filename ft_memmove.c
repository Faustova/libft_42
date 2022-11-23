/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaustov <lfaustov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:08:32 by lfaustov          #+#    #+#             */
/*   Updated: 2022/11/11 14:55:28 by lfaustov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	i = 0;
	ptrdest = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (ptrdest < ptrsrc)
		ft_memcpy(dst, src, len);
	else
	{
		while (i < len)
		{
			ptrdest[len - 1 - i] = ptrsrc[len - 1 - i];
			i++;
		}
	}
	return (ptrdest);
}
