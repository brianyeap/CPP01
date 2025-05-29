/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:56:11 by brian             #+#    #+#             */
/*   Updated: 2025/05/26 19:25:17 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
  std::cout << "\033[0;33m// Weapon created with type : " << type << "\033[0m"
            << std::endl;
}

Weapon::~Weapon() {
  std::cout << "\033[0;33m// Weapon with type : " << this->type << " deleted"
            << "\033[0m" << std::endl;
}

const std::string &Weapon::getType() { return (this->type); }

void Weapon::setType(std::string type) {
  std::cout << "\033[0;33m// Weapon with type : " << this->type
            << " change to : " << type << "\033[0m" << std::endl;
  this->type = type;
}
