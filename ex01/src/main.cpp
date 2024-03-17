/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:52:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/16 15:57:47 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap a("copain");
	ClapTrap b(a);
	ScavTrap c("haha");
	ScavTrap d = c;

	a.attack("haha");
	c.takeDamage(a.getAttack());
	c.attack("copain");
	a.takeDamage(c.getAttack());
	a.attack("haha");
	c.guardGate();
	return (0);
}
