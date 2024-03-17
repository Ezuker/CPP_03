/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:39:39 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/16 16:10:08 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constructor called of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor called of ScavTrap" << std::endl;
    this->_attack_point = 20;
    this->_energy_point = 50;
    this->_hit_point = 100;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    std::cout << "Copy constructor called of ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called of ScavTrap" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_energy_point <= 0 || this->_hit_point <= 0)
        return;
    std::cout << "ScavTrap is attacking " << target << " !" << std::endl;
}