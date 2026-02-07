/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:32:05 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/07 18:22:19 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int symb)
{
	while (*str)
	{
		if (*str == (char)symb)
			return ((char *)str);
		str++;
	}
	if (*str == (char)symb)
		return ((char *)str);
	return (NULL);
}
