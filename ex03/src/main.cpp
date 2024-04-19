/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:52:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/19 16:15:12 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	display_info(const DiamondTrap a)
{
	std::cout << "attack = " << a.getAttack() << std::endl;
	std::cout << "energy = " << a.getEnergy() << std::endl;
	std::cout << "Health = " << a.getHealth() << std::endl;
}

int main()
{
	std::cout << "Building" << std::endl;
	DiamondTrap b("Diamond b");
	DiamondTrap c(b);
	std::cout << std::endl;

	std::cout << "GamePlay" << std::endl;
	b.takeDamage(30);
	b.whoAmI();
	b.attack("Chadd-clone");
	c.whoAmI();
	std::cout << std::endl;
	return (0);
}
