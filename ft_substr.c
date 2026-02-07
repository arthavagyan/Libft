/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:50:05 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/06 18:12:46 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size_str;
	size_t	size_re;
	char	*s_point;
	char	*result;

	size_str = ft_strlen(s);
	if (!s)
		return (NULL);
	s_point = (char *)s + start;
	if (ft_strlen(s_point) < len)
		size_re = ft_strlen(s_point) + 1;
	else
		size_re = len + 1;
	result = malloc(reslen * sizeof(char));
	if (!result)
		return (NULL);
	strlcpy(result, s_point, size_re);
	return (result);
}
