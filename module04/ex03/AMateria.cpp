/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:37:55 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:37:59 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("notype") {}

AMateria::AMateria(std::string const & ttype) : type(ttype) {}

AMateria::AMateria(const AMateria &x)
{
	*this = x;
}

AMateria &AMateria::operator=(const AMateria &x)
{
	if (this != &x)
		type = x.getType();
	return (*this);
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "AMateria unused!" << std::endl;
}
