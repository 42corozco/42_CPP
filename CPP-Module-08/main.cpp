#include "easyfind.hpp"
#include <vector>

int		main(void)
{
	std::vector<int> notes; //Un tableau vide

	notes.push_back(12);  //On ajoute des cases avec les notes
	notes.push_back(19);
	notes.push_back(6);
	notes.push_back(12);
	notes.push_back(14);
	notes.push_back(15);
	easyfind(notes, 14);

	try
	{
		easyfind(notes, 5);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
