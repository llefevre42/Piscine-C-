#ifndef CAT_HPP
# define CAT_HPP

#include "IMonitureModule.hpp"

class Cat : public IMonitureModule
{
	public:
		Cat(void);
		Cat(bool graphBool, std::string varType);
		Cat(Cat const &instance);
		Cat &operator=(Cat const &rhs);
		~Cat(void);

		void readAndAddToVector();

		static void catFrame1(int x, int y);
		static void catFrame2(int x, int y);
		static void catFrame3(int x, int y);

	private:

};

#endif
