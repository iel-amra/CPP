#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>

class Icharacter
{
	public:
		// Constructors
		Icharacter();
		Icharacter(const Icharacter &copy);
		
		// Destructor
		~Icharacter();
		
		// Operators
		Icharacter & operator=(const Icharacter &assign);
		
		
	private:
		
};

#endif