/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupercase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 07:34:20 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/17 18:18:17 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*strong;

	strong = str;
	while (*strong != '\0')
	{
		if (*strong >= 'a' && *strong <= 'z')
			*strong = *strong - 32;
		strong++;
	}
	return (str);
}
