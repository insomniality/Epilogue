#include "miku.hpp"

// meow

int main(int argc, char** argv)
{
	Miku a;


	a.dancing();
	a.learning("Gangnam Style");
	if (argc != 1)
		a.learning(argv[1]);
	a.singing();
}