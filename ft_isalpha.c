/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:54:11 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/01 14:39:21 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') 
		|| (c >= 'a' && c <= 'z'))
	{
		return (c);
	}
	return (0);
}
