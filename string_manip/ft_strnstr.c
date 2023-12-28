/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earaujo <earaujo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:20:33 by earaujo           #+#    #+#             */
/*   Updated: 2023/12/28 17:16:37 by earaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string_manip.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	if (big == NULL && len == 0)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	n = ft_strlen(little);
	while (i < len && big[i])
	{
		j = 0;
		while (j + i < len && big[j + i] == little[j])
		{
			if (j == n - 1)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
