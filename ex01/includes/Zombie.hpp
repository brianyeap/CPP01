/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:41:41 by brian             #+#    #+#             */
/*   Updated: 2025/06/19 02:07:48 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
  Zombie();
  Zombie(std::string name);
  ~Zombie(void);

  void announce();
  void set_name(std::string name);

private:
  std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
