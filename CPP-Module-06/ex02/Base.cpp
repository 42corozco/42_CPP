#include "Base.hpp"

Base::~Base()
{
}

Base * Base::generate(void)
{
	int tmp = rand() % 3;

	switch (tmp)
	{
		case 0
			return static_cast<Base *>(new A());
		case 1
			return static_cast<Base *>(new B());
		case 2
			return static_cast<Base *>(new C());
	}

	return ();
}

void	Base::identify_from_pointer(Base * p)
{
	try
	{

	}
	catch(std::expection &e)
	{
		try
		{

		}
		catch(std::expection &e)
		{

		}
	}
}

	void	Base::identify_from_reference( Base & p)
	{
	}
