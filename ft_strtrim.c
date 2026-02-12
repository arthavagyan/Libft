/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 22:22:33 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/13 03:17:29 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_point;
	size_t	end_point;
	char	*res;

	start_point = 0;
	if (!s1 || !set)
		return (NULL);
	end_point = ft_strlen(s1);
	while (s1[start_point] && ft_strchr(set, s1[start_point]))
		start_point++;
	while (end_point > start_point && ft_strchr(set, s1[end_point - 1]))
		end_point--;
	res = malloc(end_point - start_point + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s1[start_point], end_point - start_point + 1);
	return (res);
}
