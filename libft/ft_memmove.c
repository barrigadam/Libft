/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriga <abarriga@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:04:48 by abarriga          #+#    #+#             */
/*   Updated: 2022/09/21 18:22:58 by abarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	const char	*s;
	char		*d;
	size_t		i;

	if (src == NULL && dst == NULL)
		return (NULL);
	s = (char *)src;
	d = (char *)dst;
	if (d > s)
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else if (d < s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (d);
		len--;
}
