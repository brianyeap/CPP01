/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:04:53 by brian             #+#    #+#             */
/*   Updated: 2025/06/18 18:23:54 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::debug(void) {
	std::cout << "\e[0;32m[ DEBUG ] ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-i";
	std::cout << "specialketchup burger. I really do !\e[0m" << std::endl;
}

void	Harl::info(void) {
	std::cout << "\e[0;36m[ INFO ] ";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
	std::cout << "enough bacon in my burger ! If you did, I wouldn’t be asking for more !\e[0m" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "\e[0;33m[ WARNING ] ";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming ";
	std::cout << "for years whereas you started working here since last month.\e[0m" << std::endl;
}

void	Harl::error(void) {
	std::cout << "\e[0;31m[ ERROR ] ";
	std::cout << "This is unacceptable ! I want to speak to the manager now.\e[0m" << std::endl;
}

void	Harl::complain(std::string level) {
	void		(Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (level.compare(str[i]) == 0)
			(this->*func[i])();
	}
}