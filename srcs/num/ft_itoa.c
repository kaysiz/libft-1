/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 23:01:37 by wescande          #+#    #+#             */
/*   Updated: 2017/09/14 19:24:03 by wescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa_nomalloc(unsigned int n, char *str)
{
	int				len;
	unsigned int	nb_tmp;

	len = 0;
	nb_tmp = n;
	while (++len && nb_tmp)
		nb_tmp /= 10;
	str[--len] = '\0';
	*str = '0';
	nb_tmp = n;
	while (nb_tmp != 0)
	{
		str[--len] = '0' + (nb_tmp % 10);
		nb_tmp /= 10;
	}
	return (str);
}

char	*ft_itoa_nomalloc(int n, char *str)
{
	int			len;
	int			nb_tmp;

	len = ((n <= 0) ? 1 : 0);
	nb_tmp = n;
	while (++len && nb_tmp)
		nb_tmp /= 10;
	str[--len] = '\0';
	*str = '0';
	nb_tmp = n;
	while (nb_tmp != 0)
	{
		str[--len] = '0' + ((n < 0) ? -1 : 1) * (nb_tmp % 10);
		nb_tmp /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int			len;
	int			nb_tmp;
	char		*str;

	len = ((n <= 0) ? 1 : 0);
	nb_tmp = n;
	while (++len && nb_tmp)
		nb_tmp /= 10;
	if (!(str = (char*)malloc(sizeof(char) * (len))))
		return (NULL);
	str[--len] = '\0';
	*str = '0';
	nb_tmp = n;
	while (nb_tmp != 0)
	{
		str[--len] = '0' + ((n < 0) ? -1 : 1) * (nb_tmp % 10);
		nb_tmp /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
