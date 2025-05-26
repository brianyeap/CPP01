/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:54:05 by brian             #+#    #+#             */
/*   Updated: 2025/05/26 18:14:13 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*horde;
	int		nbZombies;

	nbZombies = 10;
	horde = zombieHorde(nbZombies, "Zombie");
	if (!horde)
		return (1);
	for (int i = 0; i < nbZombies; i++)
		horde[i].announce();
	delete [] horde;
}
