/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaustov <lfaustov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:41:21 by lfaustov          #+#    #+#             */
/*   Updated: 2022/10/07 18:41:24 by lfaustov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (ft_strlen(s) > (start + j) && j < len)
		j++;
	dest = (char *)malloc(sizeof(char) * (j + 1));
	if (!dest)
		return (NULL);
	while (i < j)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int main()
{
	char src[] = "substr function Implementation";
	int m = 7;
	int n = 12;
	char* dest = ft_substr(src, m, n);
	printf("%s\n", dest);
	return (0);
}
*/
