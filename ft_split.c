/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:20:34 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/20 10:56:15 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (1)
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

static char	**ft_fill(char **result, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	res_i;

	i = 0;
	start = 0;
	res_i = 0;
	while (1)
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start > ft_strlen(s))
			result[res_i++] = NULL;
		else
			result[res_i++] = ft_substr(s, start, i - start);
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		words;

	words = ft_countwords(s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = ft_fill(result, s, c);
	result[words] = NULL;
	return (result);
}
/*
int	main()
{
	char *s = "hello";
	char **result;
	char c = ' ';

	result = ft_split(s, c);
	for (size_t i = 0; result[i]; i++)
		printf("s: %s\n", result[i]);
	for (size_t i = 0; result[i]; i++)
		free(result[i]);
	free(result);
	return (0);
} */
