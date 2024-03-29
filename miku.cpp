#include "miku.hpp"

void Miku::singing() const
{
	std::cout << _name << " is singing" << std::endl;
}

void Miku::learning(std::string songName) const
{
	std::cout << _name << " is learning the song called " << songName << std::endl;
}

void Miku::dancing() const
{
	std::cout << _name << " is dancing" << std::endl;
}

//////////////////////

std::string Miku::getName() const //const petqa
{
	return (_name);
}

int Miku::getLvl() const
{
	return (_intensityLvl);
}

//////////////////////
//test


Miku::Miku() : _name("Miku"), _intensityLvl(0)
{

}

Miku::Miku(const Miku & obj) : _name(obj.getName()), _intensityLvl(obj.getLvl())
{

}

Miku & Miku::operator=(const Miku & obj)
{
	if (this == &obj)
		return (*this);	
	_name = obj.getName();
	_intensityLvl = obj.getLvl();
	return (*this);
}

Miku::~Miku()
{

}