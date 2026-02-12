/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:08:28 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/13 00:52:26 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;

	s_copy = (char *)malloc(ft_strlen(s) + 1);
	if (!s_copy)
		return (NULL);
	ft_strlcpy(s_copy, s, ft_strlen(s) + 1);
	return (s_copy);
}
