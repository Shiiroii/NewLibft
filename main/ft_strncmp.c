/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:51:00 by liulm             #+#    #+#             */
/*   Updated: 2024/10/18 11:45:00 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	chars1;
	unsigned char	chars2;
	size_t			len;

	len = 0;
	while (len < n && (s1 || s2))
	{
		chars1 = (unsigned char)s1[len];
		chars2 = (unsigned char)s2[len];
		if (chars1 != chars2)
			return (chars1 - chars2);
		len++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	*str = "Salut";
// 	char	*str2 = "Salvt";

// 	printf("ft_strncmp : %d\n", ft_strncmp(str, str2, 4));
// 	printf("strncmp : %d", strncmp(str, str2, 4));
// 	return (0);
// }
