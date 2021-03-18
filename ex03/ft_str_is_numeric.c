/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:32:13 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/18 11:07:59 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
int	ft_str_is_numeric (char *str)
{
	int		output;

	output = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			output = 1;
		}
		else
		{
			return (0);
		}			
		str++;
	}
	return (output);
}
