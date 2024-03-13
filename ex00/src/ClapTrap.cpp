/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:52:38 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/13 14:45:33 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("name") , _hit_point(10), _energy_point(10), _attack_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point(10), _attack_point(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = copy.getName();
	this->_attack_point = copy.getAttack();
	this->_energy_point = copy.getEnergy();
	this->_hit_point = copy.getHealth();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

int	ClapTrap::getAttack() const
{
	return (this->_attack_point);
}

int	ClapTrap::getEnergy() const
{
	return (this->_energy_point);
}

int	ClapTrap::getHealth() const
{
	return (this->_hit_point);
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string &target)
{
	(void) target;
	std::cout << "ClapTrap " << getName() << " attacks " << target << " !";
	this->_energy_point--;
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << getName() << " took " << amount << " damage.";
	this->_hit_point -= amount;
	std::cout << " He has now " << this->_hit_point << " health." << std::endl;
	if (this->_hit_point < 0)
	{
		std::cout << getName() << " died." << std::endl;
		~ClapTrap();
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Claptrap repaired " << amount << " health. ";
	this->_energy_point--;
	this->_hit_point += amount;
	std::cout << "He has now " << this->_hit_point << "." << std::endl;
}