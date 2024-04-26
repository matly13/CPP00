/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:53:10 by martina           #+#    #+#             */
/*   Updated: 2024/04/26 10:47:39 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int		i = -1;
	int		j = -1;

	if (ac < 2)
	    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (ac > 1 && av && av[++j])
	{
		while (j > 0 && av[j][++i])
			std::cout << (char)std::toupper(av[j][i]);
	}
	std::cout << std::endl;
	return (0);
}
