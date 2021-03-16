/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:32:13 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 18:11:14 by jean-phil        ###   ########.fr       */
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

	value = 0;
	iterator = 0;
	value = str_lengeh(str);
	while (iterator != value)
	{
		output = 1;
		iterator++;
		if (*str < 58 && *str > 47)
			output = 0;
	}
	return (output);
}
