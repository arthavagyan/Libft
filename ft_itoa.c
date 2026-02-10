/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:40:29 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/11 00:09:32 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	number_len(long number)
{
	long	n;
	size_t	len;

	n = number;
	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n >= 1)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	number;
	int		sign;
	int		balance;
	size_t	len;
	char	*result;

	number = n;
	sign = 1;
	len = number_len(number);
	if (number < 0)
	{
		sign = -1;
		number *= -1;
	}
	result = calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (number % 10 >= 10)
	{
		balance = number % 10;
		result[len] = balance + '0';
		number /= 10;
		len--;
	}
	return (result);
}
