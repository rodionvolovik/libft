/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 13:49:12 by rvolovik          #+#    #+#             */
/*   Updated: 2016/11/25 13:57:57 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

int main(void)
{
	char s[] = "012345";
	// printf("ft_memcpy => %s\n", ft_memcpy(s + 1, s, 4));
	printf("memcpy => %s\n", memcpy(s + 1, s, 4));
}
