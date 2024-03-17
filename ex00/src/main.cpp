/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:52:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/16 15:43:15 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap a;
	ClapTrap b("copain");
	ClapTrap c("copain2");
	ClapTrap d = b;

	b.attack("copain2");
	c.takeDamage(b.getAttack());
	std::cout << d.getName() << std::endl;
	b.beRepaired(10);
	return (0);
}
