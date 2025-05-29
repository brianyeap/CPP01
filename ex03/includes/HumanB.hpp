/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:55:58 by brian             #+#    #+#             */
/*   Updated: 2025/05/26 19:11:37 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon &weapon);
		void	attack(void);
};

#endif
