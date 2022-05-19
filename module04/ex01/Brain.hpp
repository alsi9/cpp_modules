
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define GREEN "\x1b[3;32m"
#define END "\x1b[0m"
#define RED "\x1b[0;31m"

class Brain
{
	public:
		Brain();
		Brain(const Brain &x);
		Brain &operator=(const Brain &x);
		~Brain();

		void setIdeas(std::string idea);
		void printIdeas();

	private:
		std::string ideas[100];
};

#endif