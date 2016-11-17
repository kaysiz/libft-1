/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwtostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:44:26 by wescande          #+#    #+#             */
/*   Updated: 2016/11/17 16:42:32 by wescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strwtostr(const wchar_t *strw)
{
	char	*str;
	char	*ret;

	if (!(str = (char*)malloc(sizeof(char) * (ft_strwlen(strw)))))
		return (NULL);
	ret = str;
	while (strw && *strw)
	{
		str = ft_charwtochar(str, *strw) + ft_charwlen(*strw);
		++strw;
	}
	*str = '\0';
	return (ret);
}
