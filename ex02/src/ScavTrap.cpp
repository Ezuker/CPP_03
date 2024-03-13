/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:39:39 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/13 18:43:49 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constructor called of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor called of ScavTrap" << std::endl;
    setHealthPoint(100);
    setEnergyPoint(50);
    setAttackPoint(20);
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    std::cout << "Copy constructor called of ScavTrap" << std::endl;
    setName(copy.getName());
    setAttackPoint(copy.getAttack());
    setEnergyPoint(copy.getEnergy());
    setHealthPoint(copy.getHealth());
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called of ScavTrap" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}