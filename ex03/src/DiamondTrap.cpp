/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:48:56 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/15 13:40:39 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("clap_name"), FragTrap("clap_name"), ScavTrap("clap_name")
{
    std::cout << "Default constructor called of DiamondTrap" << std::endl;
    this->_name = "name";
    this->_hit_point = FragTrap::_hit_point; //100
    this->_attack_point = FragTrap::_attack_point; //30
    this->_energy_point = ScavTrap::_energy_point; //50
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
    std::cout << "Constructor called of DiamondTrap" << std::endl;
    this->_name = name;
    this->_hit_point = FragTrap::_hit_point; //100
    this->_attack_point = FragTrap::_attack_point; //30
    this->_energy_point = ScavTrap::_energy_point; //50
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    std::cout << "Copy constructor called of DiamondTrap" << std::endl;
    this->_name = copy.getName();
    this->_hit_point = FragTrap::_hit_point; //100
    this->_attack_point = FragTrap::_attack_point; //30
    this->_energy_point = ScavTrap::_energy_point; //50
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called of DiamondTrap" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Clapname: " << ClapTrap::getName() << std::endl;
    std::cout << "name: " << this->_name << std::endl;
}