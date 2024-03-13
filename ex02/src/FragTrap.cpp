/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:40:43 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/13 18:44:25 by bcarolle         ###   ########.fr       */
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
    setHealthPoint(100);
    setEnergyPoint(100);
    setAttackPoint(30);
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
    std::cout << "Copy constructor called of FragTrap" << std::endl;
    setName(copy.getName());
    setAttackPoint(copy.getAttack());
    setEnergyPoint(copy.getEnergy());
    setHealthPoint(copy.getHealth());
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called of FragTrap" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap wants to highFive the opponents" << std::endl;
}