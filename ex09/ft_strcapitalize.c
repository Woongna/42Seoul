/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanson <hanson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:23:04 by hanson            #+#    #+#             */
/*   Updated: 2022/02/19 10:13:54 by hanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	flag(char *str)
{
	if (*(str - 1) >= 'a' && *(str - 1) <= 'z')
		return (0);
	else if (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
		return (0);
	else if (*(str - 1) >= '0' && *(str - 1) <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*value;

	value = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	str++;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (flag(str) == 1)
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
		}
		str++;
	}
	str = value;
	return (str);
}
