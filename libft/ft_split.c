/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriga <abarriga@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:33:56 by abarriga          #+#    #+#             */
/*   Updated: 2022/09/27 18:57:06 by abarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	c_words;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
		return (0);
	c_words = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			c_words++;
		i++;
	}
	return (c_words);
}

char	*ft_calloc_str(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = ((char *)ft_calloc(sizeof(char), i + 1));
	if (!word)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const	*s, char c)
{
	int		num_words;
	char	**strs;
	int		i;

	if (!s)
		return (0);
	num_words = ft_count_words(s, c);
	strs = (char **)ft_calloc(sizeof(char *), (num_words + 1));
	if (!strs)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			strs[i] = ft_calloc_str(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (strs);
}
