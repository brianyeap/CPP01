/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:30:54 by brian             #+#    #+#             */
/*   Updated: 2025/05/26 19:25:17 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "Address of str (&str) : " << std::endl;
  std::cout << &str << std::endl;
  std::cout << "Address in stringPTR (stringPTR) : " << std::endl;
  std::cout << stringPTR << std::endl;
  std::cout << "Address in stringREF (&stringREF) : " << std::endl;
  std::cout << &stringREF << std::endl << std::endl;
  
  std::cout << "Value of str (str) : " << std::endl;
  std::cout << str << std::endl;
  std::cout << "Value pointed in stringPTR (*stringPTR) : " << std::endl;
  std::cout << *stringPTR << std::endl;
  std::cout << "Value pointed in stringREF (stringREF) : " << std::endl;
  std::cout << stringREF << std::endl;
}