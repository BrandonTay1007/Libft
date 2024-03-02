/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:50:18 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/02 21:25:03 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') 
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c<= '9'))
		return (c);
	return (0);
}