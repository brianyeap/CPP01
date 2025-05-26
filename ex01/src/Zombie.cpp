/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:41:23 by brian             #+#    #+#             */
/*   Updated: 2025/05/26 18:11:19 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {this->name = "";}

Zombie::Zombie(std::string name) { this->name = name; }

Zombie::~Zombie() { std::cout << this->name << " deleted" << std::endl; }

void Zombie::announce() {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->name = name;
}