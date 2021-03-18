/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 19:13:30 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/18 12:39:40 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *input)
{
	int		value;

	value = 0;
	while (*input != '\0')
	{	
		value = 0;
		if (*input < 32 || *input > 127)
			return (0);
		  else
			value = 1;
		  input++;
	}	
	return (value);
}
