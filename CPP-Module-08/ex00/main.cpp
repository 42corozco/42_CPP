#include "easyfind.hpp"
#include <vector>

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

template < typename T>
void	print_v(T notes)
{
		std::cout << "tab = {";
		for (unsigned int i = 0; i < notes.size(); i++)
		{
			std::cout << notes[i];
			if (i + 1 != notes.size())
				std::cout << ", ";
		}
		std::cout << "};" << std::endl;
}

int		main(void)
{
	{
		std::cout << COLOR_TWO << "------------int-----------------" << COLOR_NO << std::endl;
		std::vector<int> notes; //Un tableau vide

		notes.push_back(12);  //On ajoute des cases avec les notes
		notes.push_back(19);
		notes.push_back(6);
		notes.push_back(12);
		notes.push_back(14);
		notes.push_back(15);

		print_v(notes);
		std::cout << COLOR_ONE << "14?: " << COLOR_NO;
		easyfind< std::vector<int> >(notes, 14);

		try
		{
			std::cout << COLOR_ONE << "5?: " << COLOR_NO;
			easyfind< std::vector<int> >(notes, 5);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << COLOR_TWO << "------------char----------------" << COLOR_NO << std::endl;
		std::vector<char> notes;

		notes.push_back('a');
		notes.push_back('b');
		notes.push_back('c');
		notes.push_back('d');

		print_v(notes);
		std::cout << COLOR_ONE << "c?: " << COLOR_NO;
		easyfind< std::vector<char> >(notes, 'c');

		try
		{
		std::cout << COLOR_ONE << "z?: " << COLOR_NO;
			easyfind< std::vector<char> >(notes, 'z');
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
