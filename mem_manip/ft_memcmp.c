/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earaujo <earaujo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:55:13 by earaujo           #+#    #+#             */
/*   Updated: 2023/12/28 17:14:24 by earaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mem_manip.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (i < n && temp1[i] == temp2[i])
		i++;
	if (n == i)
		i--;
	return ((int)(temp1[i] - temp2[i]));
}
