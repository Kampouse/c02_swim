/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_uppcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:35:50 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/17 08:18:42 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		output;	

	output = 1;
	while (*str != '\0' )
	{
		output = 1;
		if (*str > 64 && *str < 91)
			output = 0;
		str++;
	}
	return (output);
}
