/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaustov <lfaustov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:13:20 by lfaustov          #+#    #+#             */
/*   Updated: 2022/11/11 19:35:06 by lfaustov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_nbriteri(char *ptr, int nbr, size_t len)
{
	len--;
	while (nbr > 0)
	{
		ptr[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (ptr);
}

static int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;

	if (!n)
		return (ft_strdup("0"));
	len = ft_nbrlen(n);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(ptr, "-2147483648"));
	if (n < 0)
	{
		n = -n;
		ptr[0] = '-';
	}
	ptr = ft_nbriteri(ptr, n, len);
	ptr[len] = '\0';
	return (ptr);
}
