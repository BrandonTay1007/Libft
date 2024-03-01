/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:00:18 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/01 14:55:55 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	int i;

	i = 0;
	while (b < len)
	{
		
	}
}

int main(int argc, char const *argv[])
{
   char str[100];

   strcpy(str,"This is hello");
   puts(str);

   memset(str + 2,'$',-4);
   puts(str);
   
   return(0);
}

