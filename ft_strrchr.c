/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:47:49 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/16 13:49:09 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			len;

	len = ft_strlen(str);
	while (str[len] != c && len >= 0)
		len--;
	if (str[len] == c)
		return ((char *)str + len);
	return (0);
}
