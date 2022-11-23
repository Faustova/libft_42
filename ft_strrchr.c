/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaustov <lfaustov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:44:44 by lfaustov          #+#    #+#             */
/*   Updated: 2022/11/11 19:33:07 by lfaustov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*scpy;

	scpy = (char *)s;
	len = ft_strlen(scpy);
	i = len - 1;
	if ((char)c == '\0')
		return (&scpy[len]);
	while (i > 0 && scpy[i] != (char) c)
	{
		i--;
	}
	if (scpy[i] == (char)c)
		return (scpy + i);
	return (0);
}
