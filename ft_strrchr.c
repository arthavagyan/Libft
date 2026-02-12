/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:28:16 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/13 00:31:49 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_symb;

	last_symb = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_symb = s;
		s++;
	}
	if (*s == (char)c)
		last_symb = s;
	return ((char *)last_symb);
}
