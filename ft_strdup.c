/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:08:28 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/02 19:02:48 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	size_t	size_s;

	if (!s)
		return (NULL);
	size_s = ft_strlen(s) + 1;
	s_copy = malloc(sizeof(char) * size_s);
	if (!s_copy)
		return (NULL);
	ft_strlcpy(s_copy, s, size_s);
	return (s_copy);
}
