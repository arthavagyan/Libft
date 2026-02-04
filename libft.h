/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:44:14 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/02 19:03:12 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_isalnum(int symb);
int		ft_isalpha(int symb);
int		ft_isascii(int symb);
int		ft_isdigit(int symb);
int		ft_isprint(int symb);
int		ft_toupper(int symb);
int		ft_tolower(int symb);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int symb);
char	*ft_strrchr(const char *str, int symb);
char	*ft_strdup(const char *s);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
#endif
