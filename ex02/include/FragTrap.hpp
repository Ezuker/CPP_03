/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:39:11 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/16 16:06:18 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        //Constructor Destructor
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		~FragTrap();

        //Member functions
        void    highFivesGuys();
};
#endif