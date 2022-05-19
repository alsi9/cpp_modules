/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:57:09 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 16:57:14 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

#define GREEN "\x1b[3;32m"
#define END "\x1b[0m"
#define RED "\x1b[0;31m"

class Zombie
{
	public:
		Zombie();
		Zombie(std::string new_name);
		~Zombie();
		void announce( void );
		void setName(std::string name);

	private:
		std::string name;
};

Zombie* zombieHorde( int N, std::string name );



#endif 
