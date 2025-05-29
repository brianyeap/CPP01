/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:56:00 by brian             #+#    #+#             */
/*   Updated: 2025/05/26 19:07:30 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack(void);
};

#endif
