/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:40:14 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:40:17 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	size = 0;
	for (int i = 0; i < 4; i++)
		array[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &x)
{
	for (int i = 0; i < 4; i++)
	{
		if (x.array[i])
			array[i] = x.array[i]->clone();
	}
	size = 0;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &x)
{
	if (this == &x)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (array[i])
			delete (array[i]);
		if (x.array[i])
			array[i] = x.array[i]->clone();
	}
	size = 0;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (array[i])
			delete (array[i]);
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	if (size < 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!(array[i]))
			{
				array[size] = m;
				size++;
				break ;
			}
		}
	}
	else
		std::cout << "Can't learn more materias!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (array[i] && array[i]->getType() == type)
			return (array[i]->clone());
	}
	return (NULL);
}

