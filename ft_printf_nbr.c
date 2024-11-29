/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:57:01 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/11/29 17:07:31 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putint(int nb)
{
	char	*temp;
	int		w_c;

	w_c = 0;
	temp = ft_itoa(nb);
	w_c = ft_putstr(temp);
	free(temp);
	return (w_c);
}
