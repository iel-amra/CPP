#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class Character : public IMateriaSource
{

	public:

		Character();
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

	private:

};

#endif /* ******************************************************* CHARACTER_H */