/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:52:38 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/16 16:12:07 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("name") , _hit_point(10), _energy_point(10), _attack_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point(10), _attack_point(0)
{
	std::cout << "Constructor called of ClapTrap" << std::endl;
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

void	ClapTrap::setAttackPoint(const int amount)
{
	this->_attack_point = amount;
}

void	ClapTrap::setEnergyPoint(const int amount)
{
	this->_energy_point = amount;
}

void	ClapTrap::setHealthPoint(const int amount)
{
	this->_hit_point = amount;
}

void	ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_point <= 0 || this->_energy_point == 0)
		return;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " !";
	this->_energy_point--;
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage.";
	this->_hit_point -= amount;
	std::cout << " He has now " << this->_hit_point << " health." << std::endl;
	if (this->_hit_point <= 0)
	{
		std::cout << this->_name << " died." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_point <= 0 || this->_energy_point == 0)
		return;
	std::cout << "Claptrap repaired " << amount << " health. ";
	this->_energy_point--;
	this->_hit_point += amount;
	std::cout << "He has now " << this->_hit_point << "." << std::endl;
}