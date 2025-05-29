/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:56:08 by brian             #+#    #+#             */
/*   Updated: 2025/05/26 21:16:20 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {
	std::cout << "\033[0;33m// " << name << " created without weapon " << "\033[0m" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "\033[0;33m// " << this->name << " deleted" << "\033[0m" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
	std::cout << "\033[0;33m// " << name << " get weapon " << this->weapon->getType() << "\033[0m" << std::endl;
}

void	HumanB::attack(void) {
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their hands" << std::endl;
}
