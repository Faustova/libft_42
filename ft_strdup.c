/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaustov <lfaustov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:37:53 by lfaustov          #+#    #+#             */
/*   Updated: 2022/11/11 19:34:03 by lfaustov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, len + 1);
	return (dst);
}
