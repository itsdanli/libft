/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 08:52:23 by danli             #+#    #+#             */
/*   Updated: 2019/09/24 09:31:17 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last;

	last = (0);
	while (*s)
	{
		if (*s == c)
			last = ((char*)s);
		++s;
	}
	if (last)
		return (last);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
