/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:34:57 by g-alves-          #+#    #+#             */
/*   Updated: 2025/08/12 10:53:27 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	size_dst;
	size_t	size_src;

	index = 0;
	size_dst = strlen(dst);
	size_src = strlen(src);
	if (size <= size_dst)
		return (size + size_src);
	while (size_dst + index < (size -1) && src[index] != '\0')
	{
		dst[index + size_dst] = src[index];
		index++;
	}
	dst[index + size_dst] = '\0';
	return (size_dst + size_src);
}
