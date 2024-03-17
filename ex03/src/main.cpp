/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:52:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/16 16:16:30 by bcarolle         ###   ########.fr       */
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
	DiamondTrap a;
	DiamondTrap b("Diamond b");
	DiamondTrap c(a);
	std::cout << std::endl;

	std::cout << "GamePlay" << std::endl;
	a.whoAmI();
	display_info(a);
	a.attack(b.getName());
	display_info(b);
	b.takeDamage(30);
	std::cout << a.getEnergy() << std::endl;
	b.whoAmI();
	b.attack("Chadd-clone");
	c.whoAmI();
	std::cout << std::endl;
	return (0);
}
