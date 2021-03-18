/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:53:51 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/18 11:07:44 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase (char *str)
{
	int		output;

	while (*str != '\0')
	{
		output = 1;
		if (*str >= 97 && *str <= 122)
			output = 1;
		else
			return (0);
		str++;
	}
	return (output);
}
