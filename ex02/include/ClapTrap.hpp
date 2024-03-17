/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:52:40 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/16 16:06:26 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		//Constructor Destructor
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		//Member functions
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		//Accessors
		std::string	getName() const;
		int			getHealth() const;
		int			getEnergy() const;
		int			getAttack() const;
		void		setName(const std::string name);
		void		setHealthPoint(const int amount);
		void		setEnergyPoint(const int amount);
		void		setAttackPoint(const int amount);


	protected:
		std::string	_name;
		int			_hit_point;
		int			_energy_point;
		int			_attack_point;
};

#endif
