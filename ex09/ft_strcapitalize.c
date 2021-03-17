/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:26:16 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/17 18:54:20 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "unistd.h" 



char ft_strcapitalize(char *str)
{
	int iterator
	char *modifiable;
		modifiable = str;

	
while(*modifiable)
{
	if(*modifiable >= 'a' && *modifiable <= 'z')
	{
		 *modifiable= *modifiable + 32;
	}
	
	modifiable++;
}
}
 int main(void){


ft_strcapitalize()

 }
