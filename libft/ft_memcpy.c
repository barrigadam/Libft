/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriga <abarriga@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:14:40 by abarriga          #+#    #+#             */
/*   Updated: 2022/09/21 13:18:38 by abarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	unsigned char			*ptr1;
	const unsigned char		*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	while (n > 0)
	{
		*(ptr1++) = *(ptr2++);
	}
	return (dst);
}
