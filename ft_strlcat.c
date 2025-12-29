/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeyha <daeyha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 18:11:06 by daeyha            #+#    #+#             */
/*   Updated: 2025/12/29 19:24:35 by daeyha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (src_len + size);
	while (dst[i])
		dst[i++];
	while (i < size - 1 && *src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (dst_len + size);
}
