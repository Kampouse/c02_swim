/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:03:56 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 15:15:47 by jean-phil        ###   ########.fr       */
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

int	str_lower_case (char *str)
{
	int		iterator;
	int		value;	

	iterator = 0;
	value = str_lengeh(str);
	while (*str >= 'a' && *str <= 'z' && iterator != value)
	{
		iterator++;
	}
	if (*str == '\0' )
		value = 1;
	else if (iterator == value - 1)
		value = 0;
	else
		value = 1;
	 return (value);
}
