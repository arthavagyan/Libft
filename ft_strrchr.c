/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:28:16 by artavagy          #+#    #+#             */
/*   Updated: 2026/01/29 20:45:15 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int symb)
{
	const char	*last_symb;

	last_symb = NULL;
	while (*str)
	{
		if (*str == symb)
			last_symb = str;
		str++;
	}
	if (*str == symb)
		last_symb = str;
	return ((char *)last_symb);
}
