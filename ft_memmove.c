/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeyha <daeyha@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 23:53:59 by daeyha            #+#    #+#             */
/*   Updated: 2025/12/29 17:45:05 by daeyha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	i = 0;
	if (dst < src)
	{
		dst_ptr = (unsigned char *) dst;
		src_ptr = (const unsigned char *) src;
	}
	else
	{
		dst_ptr = ((unsigned char *) dst) + (n - 1);
		src_ptr = ((const unsigned char *) src) + (n - 1);
	}
	while (i < len)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
