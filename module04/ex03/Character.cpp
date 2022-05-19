/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:38:17 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:38:20 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("noname")
{
	size = 0;
	for (int i = 0; i < 4; i++)
		array[i] = NULL;
}

Character::Character(std::string nname) : name(nname)
{
	size = 0;
	for (int i = 0; i < 4; i++)
		array[i] = NULL;
}

Character::Character(const Character &x)
{
	name = x.getName();
	size  = 0;
	for (int i = 0; i < 4; i++)
	{
		if (x.array[i])
			array[i] = x.array[i]->clone();
	}
}

Character &Character::operator=(const Character &x)
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
	name = x.getName();
	size = 0;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (array[i])
			delete (array[i]);
	}
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
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
				return ;
			}
		}
	}
	else
		std::cout << "Inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (array[idx])
			array[idx] = NULL;
		else
			std::cout << "Inventory " << idx << "is already empty" << std::endl;
	}
	else
		std::cout << "Wrong index to unequip" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (array[idx])
			array[idx]->use(target);
		else
			std::cout << "There's no materia equipped in inventory " << idx << std::endl;
	}
	else
		std::cout << "Wrong index to unequip" << std::endl;


}
