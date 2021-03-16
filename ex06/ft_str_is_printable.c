/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 19:13:30 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 19:22:29 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_printable(char *input)
{
	int		value;

	value = 1;
	while (*input != '\0')
	{
		value = 1;
		if (*input >= 0 && *input <= 127)
			 	input = 0;
	}	
	return (value);
}
