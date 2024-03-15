/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:52:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/14 18:43:21 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap a("copain");
	ClapTrap b(a);
	ScavTrap c("haha");
	ScavTrap d = c;
	ClapTrap e = b;

	a.attack("haha");
	c.takeDamage(a.getAttack());
	return (0);
}
