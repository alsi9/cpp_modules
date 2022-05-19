/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:33:45 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/12 21:33:49 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << GREEN"Brain default constructor called"END << std::endl;
}

Brain::Brain(const Brain &x)
{
    std::cout << GREEN"Brain copy constructor called"END << std::endl;
    *this = x;
}

Brain &Brain::operator=(const Brain &x)
{
	std::cout << "Copy assignment operator called (Brain)" << std::endl;
    if (this == &x)
        return (*this);
    for (int i = 0; i < 100; i++)
        ideas[i] = x.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << RED"Brain destructor called"END << std::endl;
}

void Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (!(ideas[i].length()))
		{
			ideas[i] = idea;
			break ;
		}
	}
}

void Brain::printIdeas()
{
	for (int i = 0; i < 100; i++)
	{
		if (!(ideas[i].length()))
			break ;
		std::cout << "Ideas number " << i + 1 << ": " << ideas[i] << std::endl;
	}
}
