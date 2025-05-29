/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:56:07 by brian             #+#    #+#             */
/*   Updated: 2025/05/26 19:25:17 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {
	std::cout << "\033[0;33m// " << name << " created with " << weapon.getType() << "\033[0m" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "\033[0;33m// " <<  this->name << " deleted" << "\033[0m" << std::endl;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}