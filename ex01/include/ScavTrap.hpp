/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:27:55 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/16 16:04:33 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        //Constructor Destructor
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();
        
        //Member functions
        void    guardGate();
        void    attack(const std::string &target);
};
#endif