#include "mutantstack.hpp"

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

int		main()
{
	{
		std::cout << COLOR_TWO << "------------main1----------------" << COLOR_NO << std::endl;
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << COLOR_TWO << "------------main2----------------" << COLOR_NO << std::endl;
		MutantStack<int>	mstack;

		std::cout << COLOR_ONE << "Push " << COLOR_NO << "-24 -42 0 42 24" << std::endl;
		mstack.push(-24);
		mstack.push(-42);
		mstack.push(0);
		mstack.push(42);
		mstack.push(24);

		std::cout << COLOR_ONE << "test iterator" << COLOR_NO << std::endl;
		std::cout << "{ ";
		for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); ++i)
			std::cout << *i << ' ';
		std::cout << "}" << std::endl;

		std::cout << COLOR_ONE << "pop" << COLOR_NO << std::endl;
		mstack.pop();
		std::cout << "{ ";
		for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); ++i)
			std::cout << *i << ' ';
		std::cout << "}" << std::endl;

		std::cout << COLOR_ONE << "size" << COLOR_NO << std::endl;
		std::cout << mstack.size() << std::endl;


	}
	return 0;
}
