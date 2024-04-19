/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:48:33 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/19 16:09:37 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		//Constructor Destructor
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &copy);
		~DiamondTrap();

		//Member functions
		void	whoAmI();

	private:
		std::string _name;
};
