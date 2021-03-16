/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:32:13 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 16:17:56 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_lengeh ( char *str)
{
	char	*ray;
	int		lenght;

	ray = str;
	lenght = 0;
	 	while (*ray != 0)
	{
		ray++;
		lenght++;
	}
	return (lenght);
}

int	ft_str_is_numeric (char *str)
{
	int		iterator;
	int		value;	
	int		output;

	output = 1;
	value = 0;
	iterator = 0;
	value = str_lengeh(str);
	while (iterator != value)
	{
		iterator++;
		if (*str < 58 )
			output = 0;
	}
	return (output);
}
