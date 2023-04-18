#include "Icharacter.hpp"

// Constructors
Icharacter::Icharacter()
{
	std::cout << "\e[0;33mDefault Constructor called of Icharacter\e[0m" << std::endl;
}

Icharacter::Icharacter(const Icharacter &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Icharacter\e[0m" << std::endl;
}


// Destructor
Icharacter::~Icharacter()
{
	std::cout << "\e[0;31mDestructor called of Icharacter\e[0m" << std::endl;
}


// Operators
Icharacter & Icharacter::operator=(const Icharacter &assign)
{
	(void) assign;
	return *this;
}

