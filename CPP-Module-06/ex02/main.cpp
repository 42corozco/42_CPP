#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>


#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"


Base * generate(void)
{
	int tmp = rand() % 3;

	switch (tmp)
	{
		case 0:
			return (static_cast<Base *>(new A()));
		case 1:
			return (static_cast<Base *>(new B()));
		case 2:
			return (static_cast<Base *>(new C()));
	}
	return (NULL);
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error : base" << std::endl;

}


void	identify_from_reference( Base & p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		a.i_am();
	}
	catch(std::exception &e)
	{
		try
		{
			B & b = dynamic_cast<B &>(p);
			b.i_am();
		}
		catch(std::exception &e)
		{
			C & c = dynamic_cast<C &>(p);
			c.i_am();
		}
	}
}


int		main(void)
{
	srand(time(NULL));
	{

		Base *ptr1 = generate();
		Base & ref1 = *ptr1;


		std::cout << COLOR_TWO << "-*ptr--" << COLOR_NO << std::endl;
		identify_from_pointer(ptr1);
		std::cout << COLOR_TWO << "-*ref--" << COLOR_NO << std::endl;
		identify_from_reference(ref1);

		delete ptr1;
	}
	{

		Base *ptr1 = generate();
		Base & ref1 = *ptr1;


		std::cout << COLOR_TWO << "-*ptr--" << COLOR_NO << std::endl;
		identify_from_pointer(ptr1);
		std::cout << COLOR_TWO << "-*ref--" << COLOR_NO << std::endl;
		identify_from_reference(ref1);

		delete ptr1;
	}
	return 0;
}
