/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_uppcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:35:50 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/18 11:33:42 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		output;	

	output = 0;
	while (*str != '\0' )
	{
		output = 1;
		if (*str > 64 && *str < 91)
			output = 1;
		else
			return (0);
		str++;
	}
	return (output);
}
