/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriga <abarriga@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:27:48 by abarriga          #+#    #+#             */
/*   Updated: 2022/09/20 16:13:24 by abarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')	|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	c;
	c = 48;
	printf("%d\n", isalpha(c));
	printf("%d\n", ft_isalpha(c)); 
}
