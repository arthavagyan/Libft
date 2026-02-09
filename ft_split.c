/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 22:47:12 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/09 16:07:52 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"*
char	**ft_split(char const *s, char c)
{
	size_t	w_len;
	size_t	i;
	size_t	j;
	size_t len;
	char	**res;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	res = ft_calloc(num_w(s, c) + 1, sizeof(char *));
	while (s[i])
	{
		if (s[i] != c)
		{
			w_len = len_w(&s[i], c);
			res[j] = ft_calloc(w_len + 1, sizeof(char));
			if (!res[j])
				return (free_calloc(res, j));
			len = 0;
			while (s[i] && s[i] != c)
				res[j][len++] = s[i++];
			j++;
		}
		else
			i++;
	}
	return (res);
}

char	**free_calloc(char **res, size_t i)
{
	while (i > 0)
	{
		free(res[i - 1]);
		i--;
	}
	free(res);
	return (NULL);
}

size_t	num_w(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

size_t	len_w(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}if (s[i] != c && (i == 0 || s[i - 1] == c))
                        count++;
                i++;
        }
        return (count);
}

size_t  len_w(char const *s, char c)
{
        size_t  len;

        len = 0;
        while (s[len] && s[len] != c)
                len++;
        return (len);
}

