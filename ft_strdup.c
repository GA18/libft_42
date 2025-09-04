/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:09:16 by g-alves-          #+#    #+#             */
/*   Updated: 2025/09/01 15:15:49 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*string_duplicate;

	len = ft_strlen(s) +1;
	string_duplicate = malloc(len);
	if (!string_duplicate)
		return (NULL);
	memcpy(string_duplicate, s, len);
	return (string_duplicate);
}
