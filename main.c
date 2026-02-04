/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:52:23 by artavagy          #+#    #+#             */
/*   Updated: 2026/02/02 19:01:05 by artavagy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(void)
{
//	IS_ALPHA
	char	symb;

	symb = 'A';
	if(ft_isalpha(symb))
		printf("%c is a alphabetic\n", symb);
	else
		printf("%c is not a alphabetic\n", symb);

//	IS_DIGIT
	char	symb1;

	symb1 = '1';
	if (ft_isdigit(symb1)) 
		printf("%c is a digit\n", symb1);
	else
		printf("%c is not a digit\n", symb1);

//	IS_ALNUM
	char	symb2;

	symb2 = '+';
	if (ft_isalnum(symb2))
		printf("%c is alphanumeric\n", symb2);
	else
		printf("%c is not alphanumeric\n", symb2);

//	IS_PRINT
	char	symb3;

	symb3 = '+';
	if (ft_isprint(symb3))
                printf("%c is printable\n", symb3);
	else
		printf("%c is not printable\n", symb3);

//	ÌS_ASCII
        char    symb4;

        symb4 = '+';
        if (ft_isascii(symb4))
                printf("%c is in ascii\n", symb4);
        else
                printf("%c is not in ascii\n", symb4);

//	TO_UPPER
	char	symb5;

	symb5 = 'b';
	symb5 = ft_toupper(symb5);
	printf("%c\n", symb5);

//	TO_LOWER
	char	symb6;

	symb6 = 'A';
	symb6 = ft_tolower(symb6);
	printf("%c\n", symb6);

//      STRLEN
	char	*str = "HelloWorld";

	printf("str = %zu\n", ft_strlen(str));

//	STRLCPY
	char	dest[10];
	const char	src[12] = "HelloWorld10";
	size_t result = ft_strlcpy(dest, src, 10);

	printf("dest = %s,\n return = %zu\n", dest, result);

//	STRLCAT
        char    dest1[4] = "abc";
        const char      src1[13] = "HelloWorld10";
        size_t result1 = ft_strlcat(dest1, src1, 10);

        printf("dest = %s,\n return = %zu\n", dest1, result1);

//	STRCHR
	char myStr[] = "Hello World";
	char *myPtr = ft_strchr(myStr, 'W');
	if (myPtr != NULL)
 		 printf("%s\n", myPtr);
//	STRRCHR
	char myStr1[] = "Hello World";
	char *myPtr1 = ft_strrchr(myStr1, 'o');
	if (myPtr1 != NULL)
		printf("%s\n", myPtr1);
//	STRNSTR
	char big[] = "Hello World";
	char little[] = "wqe";
	char *result3 = ft_strnstr(big, little, 11);
	if (result3 != NULL)
		printf("%s\n", result3);
//	STRNCMP
	char	s1[] = "";
	char	s2[] = "a";
	int	i = ft_strncmp(s1, s2, 1);
	printf("%d\n", i);
//	ATOI
	char	nptr[] = "    +123";
	int	result7 = ft_atoi(nptr);
	printf("%d\n", result7);
//	MEMSET
	char	test[10];
	ft_memset(test, 'A', 5);
	test[5] = '\0';
	printf("%s\n", test);
//	MEMCPY
	char	dest_m[] = "abcde";
	char	src_m[] = "zxc";
	ft_memcpy(dest_m, src_m, 3);
	printf("%s\n", dest_m);	
//	MEMMOVE
	char	dest_move[] = "abcde";
	ft_memmove(dest_move, dest_move + 2, 3);
	printf("%s\n", dest_move);
//	CALLOC
	int *i_calloc = ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("%d\n", i_calloc[i]);
	free(i_calloc);
//	STRDUP
	char	strdup_s[] = "Hello";
	char	*strdup_r = ft_strdup(strdup_s);
	for (int i = 0; i < 5; i++)
                printf("%c\n", strdup_r[i]);
        free(strdup_r);
}
