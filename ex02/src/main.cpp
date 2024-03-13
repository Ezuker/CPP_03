/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:52:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/13 18:47:11 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap a("Clap");
	ClapTrap b("Clap2");
	ScavTrap c("Scav");
	FragTrap d("Frag");

	a.attack("haha");
	c.takeDamage(a.getAttack());
	d.beRepaired(10);
	d.highFivesGuys();
	c.guardGate();
	return (0);
}
