/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:40:43 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/15 13:32:48 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default constructor called of FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor called of FragTrap" << std::endl;
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_point = 30;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
    std::cout << "Copy constructor called of FragTrap" << std::endl;
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_point = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called of FragTrap" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap wants to highFive the opponents" << std::endl;
}