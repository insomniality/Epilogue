#ifndef MIKU_HPP
# define MIKU_HPP

#include <iostream>

class Miku
{
	public:
		void singing() const;
		void learning(std::string songName) const;
		void dancing() const;
	public:	
		std::string getName();
		int getLvl();
	public:
		Miku();
		Miku(const Miku & obj);
		Miku & operator=(const Miku & obj);
		~Miku();
	private:
		std::string _name;
		int _intensityLvl;
};

#endif